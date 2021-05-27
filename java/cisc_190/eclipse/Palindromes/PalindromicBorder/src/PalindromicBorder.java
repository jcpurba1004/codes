import java.io.*;
import java.util.Arrays;

public class PalindromicBorder {

	static int[][] es;
    static int[] slink, len, cnt;
    static int free;

    static int newNode(int l) {
        len[free] = l;
        return free++;
    }

    static int get(int i, char c) {
        return es[c - 'a'][i];
    }

    static void set(int i, char c, int n) {
        es[c - 'a'][i] = n;
    }

    public static void solve(Input in, PrintWriter out) throws IOException {
        char[] s = in.next().toCharArray();
        int n = s.length;
        es = new int[8][n + 2];
        for (int[] ar : es) {
            Arrays.fill(ar, -1);
        }
        len = new int[n + 2];
        slink = new int[n + 2];
        cnt = new int[n + 2];
        int root0 = newNode(0);
        int rootm1 = newNode(-1);
        slink[root0] = slink[rootm1] = rootm1;
        int cur = root0;
        for (int i = 0; i < n; ++i) {
            while (i - len[cur] == 0 || s[i] != s[i - len[cur] - 1]) {
                cur = slink[cur];
            }
            if (get(cur, s[i]) == -1) {
                set(cur, s[i], newNode(len[cur] + 2));
                if (cur == rootm1) {
                    slink[get(cur, s[i])] = root0;
                } else {
                    int cur1 = slink[cur];
                    while (s[i] != s[i - len[cur1] - 1]) {
                        cur1 = slink[cur1];
                    }
                    slink[get(cur, s[i])] = get(cur1, s[i]);
                }
            }
            cur = get(cur, s[i]);
            cnt[cur]++;
        }
        long ans = 0;
        for (int i = free - 1; i >= 0; --i) {
            cnt[slink[i]] += cnt[i];
            if (len[i] > 0) {
                ans = (ans + 1L * cnt[i] * (cnt[i] - 1) / 2) % 1000000007;
            }
        }
        out.println(ans);
    }

    public static void main(String[] args) throws IOException {
//        FileWriter out = new FileWriter("output.txt");
//        solve(new FileReader("input.txt"), out);
        PrintWriter out = new PrintWriter(System.out);
        solve(new Input(new BufferedReader(new InputStreamReader(System.in))), out);
        out.close();
    }

    static class Input {
        BufferedReader in;
        StringBuilder sb = new StringBuilder();

        public Input(BufferedReader in) {
            this.in = in;
        }

        public Input(String s) {
            this.in = new BufferedReader(new StringReader(s));
        }

        public String next() throws IOException {
            sb.setLength(0);
            while (true) {
                int c = in.read();
                if (c == -1) {
                    return null;
                }
                if (" \n\r\t".indexOf(c) == -1) {
                    sb.append((char)c);
                    break;
                }
            }
            while (true) {
                int c = in.read();
                if (c == -1 || " \n\r\t".indexOf(c) != -1) {
                    break;
                }
                sb.append((char)c);
            }
            return sb.toString();
        }

        public int nextInt() throws IOException {
            return Integer.parseInt(next());
        }

        public long nextLong() throws IOException {
            return Long.parseLong(next());
        }

        public double nextDouble() throws IOException {
            return Double.parseDouble(next());
        }
    }
}