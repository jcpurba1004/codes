import java.io.*;
import java.util.Arrays;
import java.util.StringTokenizer;

public class LucyFlowers {
	public static long MOD = (long) (1e9 + 9);
    public static long[] Catalan;
    public static long[][] C;
    public static int MAXN = 5001;
	public static void main(String[] args) throws IOException {
		C = generateBinomialCoefficients(MAXN, MOD);
        Catalan = generateCatalan(MAXN, MOD);
        long[] ans = new long[MAXN];
        for (int i = 0; i < MAXN; i++) {
            long res = 0;
            for (int j = 0; j <= i; j++) {
                res += (C[i][j] * Catalan[j]) % MOD;
                if(res >= MOD) res -= MOD;
            }
            ans[i] = res;
        }
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        PrintWriter pw = new PrintWriter(System.out);
        int t = Integer.parseInt(br.readLine());
        while (t --> 0) {
            int n = Integer.parseInt(br.readLine());
            pw.println(ans[n]);
        }
        pw.close();

    }

    public static long[] generateCatalan(int n, long module) {
        long[] inv = generateReverse(n + 2, module);
        long[] Catalan = new long[n];
        Catalan[1] = 1;
        for (int i = 1; i < n - 1; i++) {
            Catalan[i + 1] = (((2 * (2 * i + 1) * inv[i + 2]) % MOD) * Catalan[i]) % MOD;
        }
        return Catalan;
    }

    public static long[] generateReverse(int upTo, long module) {
        long[] result = new long[upTo];
        if (upTo > 1)
            result[1] = 1;
        for (int i = 2; i < upTo; i++)
            result[i] = (module - module / i * result[((int) (module % i))] % module) % module;
        return result;
    }

    public static long[][] generateBinomialCoefficients(int n, long module) {
        long[][] result = new long[n + 1][n + 1];
        if (module == 1)
            return result;
        for (int i = 0; i <= n; i++) {
            result[i][0] = 1;
            for (int j = 1; j <= i; j++) {
                result[i][j] = result[i - 1][j - 1] + result[i - 1][j];
                if (result[i][j] >= module)
                    result[i][j] -= module;
            }
        }
        return result;
    }
}