import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.HashSet;
import java.util.List;
import java.util.Map;
import java.util.Set;
import java.util.StringTokenizer;

public class Palindrome {

	static Set<String> dict = new HashSet<>();
    static Map<String, Double> ans = new HashMap<>();

    static String convert(String s) {
        StringBuilder builder = new StringBuilder();
        char[] map = new char[26];
        char inc = 'a';
        for (char ch : s.toCharArray()) {
            if (map[ch - 'a'] == 0) map[ch - 'a'] = inc++;
            builder.append(map[ch - 'a']);
        }
        return builder.toString();
    }

    static boolean isValid(String s) {
        int[] cnt = new int[4]; // 4 is enough
        for (char ch : s.toCharArray())
            cnt[ch - 'a']++;
        int oddCnt = 0;
        for (int i : cnt)
            if (i % 2 == 1) oddCnt++;
        return oddCnt <= 1;
    }

    static boolean isPalindrome(String s) {
        for (int i = 0, j = s.length() - 1; i < j; i++, j--)
            if (s.charAt(i) != s.charAt(j)) return false;
        return true;
    }

    static void generate(String s) {
        if (s.length() > 0 && isValid(s)) dict.add(convert(s));
        if (s.length() < 8) {
            generate(s + "a");
            generate(s + "b");
            generate(s + "c");
            generate(s + "d");
        }
    }

    static String swap(String s, int i, int j) {
        char[] arr = s.toCharArray();
        char tmp = arr[i];
        arr[i] = arr[j];
        arr[j] = tmp;
        return String.copyValueOf(arr);
    }

    static void preprocess() {
        for (int len = 1; len <= 8; len++) {
            List<String> cand = new ArrayList<>();
            Map<String, Integer> reverseMap = new HashMap<>();
            for (String s : dict)
                if (s.length() == len) {
                    reverseMap.put(s, cand.size());
                    cand.add(s);
                }

            int n = cand.size();
            double[][] A = new double[n][n + 1];
            for (int i = 0; i < n; i++) {
                String s = cand.get(i);
                if (isPalindrome(cand.get(i))) {
                    A[i][i] = 1;
                    A[i][n] = 0;
                } else {
                    List<Integer> next = new ArrayList<>();
                    for (int x = 0; x < len; x++)
                        for (int y = x + 1; y < len; y++)
                            next.add(reverseMap.get(convert(swap(s, x, y))));

                    A[i][i] = next.size();
                    A[i][n] = next.size();
                    for (int index : next)
                        A[i][index]--;
                }
            }

            // Now, we can perform Gaussian elimination
            for (int i = 0; i < n; i++) {
                int which = i;
                for (int j = i + 1; j < n; j++)
                    if (Double.compare(Math.abs(A[j][i]), Math.abs(A[which][i])) > 0) which = j;
                for (int j = i; j <= n; j++) {
                    double tmp = A[i][j];
                    A[i][j] = A[which][j];
                    A[which][j] = tmp;
                }

                for (int j = n; j >= i; j--)
                    A[i][j] /= A[i][i];

                for (int row = i + 1; row < n; row++) {
                    double ratio = A[row][i];
                    for (int j = i; j <= n; j++)
                        A[row][j] -= ratio * A[i][j];
                }
            }
            for (int i = n - 2; i >= 0; i--) {
                for (int j = i + 1; j < n; j++) {
                    A[i][n] -= A[i][j] * A[j][n];
                    A[i][j] = 0;
                }
            }

            // save the answer to the global map
            for (int i = 0; i < n; i++)
                ans.put(cand.get(i), A[i][n]);
        }
    }

    public static void main(String[] args) throws Exception {
        Reader.init(System.in);
        BufferedWriter cout = new BufferedWriter(new OutputStreamWriter(System.out));

        generate("");
        preprocess();

        for (int T = Reader.nextInt(); T > 0; T--) {
            String s = Reader.next();
            String convert = convert(s);
            // use abs to prevent -0.000
            cout.write(String.format("%.4f%n", Math.abs(ans.get(convert)))); 
        }

        cout.close();
    }

    static class Pair<U extends Comparable<U>, V extends Comparable<V>> implements Comparable<Pair<U, V>> {
        final U _1;
        final V _2;

        private Pair(U key, V val) {
            this._1 = key;
            this._2 = val;
        }

        public static <U extends Comparable<U>, V extends Comparable<V>> Pair<U, V> instanceOf(U _1, V _2) {
            return new Pair<U, V>(_1, _2);
        }

        @Override
        public String toString() {
            return _1 + " " + _2;
        }

        @Override
        public int hashCode() {
            int res = 17;
            res = res * 31 + _1.hashCode();
            res = res * 31 + _2.hashCode();
            return res;
        }

        @Override
        public int compareTo(Pair<U, V> that) {
            int res = this._1.compareTo(that._1);
            if (res < 0 || res > 0) return res;
            else return this._2.compareTo(that._2);
        }

        @Override
        public boolean equals(Object obj) {
            if (this == obj) return true;
            if (!(obj instanceof Pair)) return false;
            Pair<?, ?> that = (Pair<?, ?>) obj;
            return _1.equals(that._1) && _2.equals(that._2);
        }
    }

    /** Class for buffered reading int and double values */
    static class Reader {
        static BufferedReader reader;
        static StringTokenizer tokenizer;

        /** call this method to initialize reader for InputStream */
        static void init(InputStream input) {
            reader = new BufferedReader(new InputStreamReader(input));
            tokenizer = new StringTokenizer("");
        }

        /** get next word */
        static String next() throws IOException {
            while (!tokenizer.hasMoreTokens()) {
                // TODO add check for eof if necessary
                tokenizer = new StringTokenizer(reader.readLine());
            }
            return tokenizer.nextToken();
        }

        static int nextInt() throws IOException {
            return Integer.parseInt(next());
        }

        static double nextDouble() throws IOException {
            return Double.parseDouble(next());
        }
    }
}