import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class FairyChess {

	static final class Operation {

        private static final int FINITE_FIELD_MODULO = 1000000007;

        public static int add(int a, int b) {
            int r = a + b;
            return r - (((FINITE_FIELD_MODULO - r - 1) >> 31) & FINITE_FIELD_MODULO);
        }

        public static int sub(int a, int b) {
            int r = a - b;
            return r + (FINITE_FIELD_MODULO & (r >> 31));
        }
    }

    private static char PAWN_SYMBOL = 'P';
    private static char LEAPER_SYMBOL = 'L';
    private static int EMPTY = 0;
    private static int PAWN = 1;

    private int n, m, s;
    private int leaperRow, leaperCol;
    private int[][] board;
    
    public FairyChessSolver(int boardSize, int moves, int s, String[] board) {
        this.n = boardSize;
        this.board = new int[this.n][this.n];
        this.m = moves;
        this.s = s;
        for (int i = 0; i < boardSize; i++) {
            String row = board[i];
            int[] thisRow = this.board[i];
            for (int j = 0; j < boardSize; j++) {
                if (row.charAt(j) == PAWN_SYMBOL) {
                    thisRow[j] = PAWN;
                }
                else if (row.charAt(j) == LEAPER_SYMBOL) {
                    leaperRow = i;
                    leaperCol = j;
                }
            }
        }
    }

    public void solve() {
        int[][] ways = new int[n][n];
        ways[leaperRow][leaperCol] =  1;

        int[][] cWays = new int[n][n];
        int[][] s1 = new int[n+s][n+s];
        int[][] s2 = new int[n+s][n+s];
        for (int move = 0; move < m; move++) {

            // - evaluate sums of diagonal stripes of length s / s-1
            // -- i == 0
            for (int j = s; j < n + s; j++) {
                s1[0][j] = ways[0][j-s];
            }
            
            // -- i -> [1, s]
            for (int i = 1; i <= s; i++) {
                int[] s1i = s1[i];
                int[] s1i1 = s1[i-1];
                if (i < n) {
                    int[] wi = ways[i];
                    for (int j = 0; j < s; j++) {
                        s1i[j] = s1i1[j+1];
                    }
                    for (int j = s, l = n + s - 1; j < l; j++) {
                        s1i[j] = Operation.add(s1i1[j+1], wi[j-s]);
                    }
                    s1i[n+s-1] = wi[n-1];
                }
                else {
                    for (int j = 0, l = n + s - 1; j < l; j++) {
                        s1i[j] = s1i1[j+1];
                    }
                }
            }

            // -- i -> (s, n+s)
            for (int i = s + 1; i < n + s; i++) {
                int[] s1i = s1[i];
                int[] s1i1 = s1[i-1];
                int[] wis1 = ways[i-s-1];
                if (i < n) {
                    int[] wi = ways[i];
                    for (int j = 0; j < s; j++) {
                        if (j+1 < n) {
                            s1i[j] = Operation.sub(s1i1[j+1], wis1[j+1]);
                        }
                        else {
                            s1i[j] = s1i1[j+1];                            
                        }
                    }
                    for (int j = s, l = n + s - 1; j < l; j++) {
                        if (j+1 < n) {
                            s1i[j] = Operation.sub(Operation.add(s1i1[j+1], wi[j-s]), wis1[j+1]);
                        }
                        else {
                            s1i[j] = Operation.add(s1i1[j+1], wi[j-s]);
                        }
                    }
                    s1i[n+s-1] = wi[n-1];
                }
                else {
                    for (int j = 0, l = n - 1; j < l; j++) {
                        s1i[j] = Operation.sub(s1i1[j+1], wis1[j+1]);
                    }
                    for (int j = n - 1, l = n + s - 1; j < l; j++) {
                        s1i[j] = s1i1[j+1];
                    }
                }
            }

            // -- i == 0
            for (int j = 0; j < n; j++) {
                s2[0][j] = ways[0][j];
            }
            
            // -- i -> [1, s)
            for (int i = 1; i < s; i++) {
                int[] s2i = s2[i];
                int[] s2i1 = s2[i-1];
                if (i < n) {
                    int[] wi = ways[i];
                    s2i[0] = wi[0];
                    for (int j = 1; j < n; j++) {
                        s2i[j] = Operation.add(s2i1[j-1], wi[j]);
                    }
                    for (int j = n, l = n + s; j < l; j++) {
                        s2i[j] = s2i1[j-1];
                    }
                }
                else {
                    for (int j = 1, l = n + s; j < l; j++) {
                        s2i[j] = s2i1[j-1];
                    }
                }
            }
            
            // -- i -> [s, n+s)
            for (int i = s; i < n + s; i++) {
                int[] s2i = s2[i];
                int[] s2i1 = s2[i-1];
                int[] wis = ways[i-s];
                if (i < n) {
                    int[] wi = ways[i];
                    s2i[0] = wi[0];
                    // --- j -> [1, s)
                    for (int j = 1; j < s; j++) {
                        if (j < n) {
                            s2[i][j] = Operation.add(s2i1[j-1], wi[j]);
                        }
                        else {
                            s2i[j] = s2i1[j-1];
                        }
                    }
                    // --- j -> [s, s+n)
                    for (int j = s, l = n + s; j < l; j++) {
                        if (j < n) {
                            s2i[j] = Operation.sub(Operation.add(s2i1[j-1], wi[j]), wis[j-s]);
                        }
                        else {
                            s2i[j] = Operation.sub(s2i1[j-1], wis[j-s]);
                        }
                    }            
                }
                else {
                    // --- j -> [1, s)
                    for (int j = 1; j < s; j++) {
                        s2i[j] = s2i1[j-1];
                    }
                    // --- j -> [s, s+n)
                    for (int j = s, l = n + s; j < l; j++) {
                        s2i[j] = Operation.sub(s2i1[j-1], wis[j-s]);
                    }            
                }
            }

            // - evaluate updated "ways to move" matrix
            // -- evaluate after-move value of cell (0, 0)
            int value = 0;
            for (int i = 0; i <= Math.min(s, n-1); i++) {
                int[] wi = ways[i];
                for (int j = 0, l = Math.min(s-i, n-1); j <= l; j++) {
                    value = Operation.add(value, wi[j]);
                }
            }
            cWays[0][0] = value;

            for (int i = 0; i < n; i++) {
                if (i > 0) {
                    value = cWays[i-1][0];
                    // - add: s1(i+s, s)
                    value = Operation.add(value, s1[i+s][s]);
                    // - sub: s2(i-1, s), ways(i-s-1, 0)
                    if (i > s) {
                        value = Operation.sub(Operation.sub(value, s2[i-1][s]), ways[i-s-1][0]);
                    }
                    else {
                        value = Operation.sub(value, s2[i-1][s]);
                    }
                    // - set value
                    cWays[i][0] = value;
                    
                    // - i > 0
                    int[] cwi = cWays[i];
                    int[] s1is = s1[i+s];
                    int[] s1i = s1[i];
                    int[] s2i1 = s2[i-1];
                    int[] s2is = s2[i+s];
                    for (int j = 1; j < n; j++) {
                        value = cwi[j-1];
                        // - add: s1(i+s, j+s), s2(i-1, j+s-1)
                        value = Operation.add(Operation.add(value, s1is[j+s]), s2i1[j+s-1]);
                        // - sub: s1(i, j-1), s2(i+s, j-1)
                        value = Operation.sub(Operation.sub(value, s1i[j-1]), s2is[j-1]);
                        // - set value
                        cwi[j] = value;
                    }
                }
                else {
                    // - i == 0
                    for (int j = 1; j < n; j++) {
                        value = cWays[0][j-1];
                        // - add: s1(i+s, j+s)
                        value = Operation.add(value, s1[s][j+s]);
                        // - sub: s1(i, j-1), s2(i+s, j-1)
                        value = Operation.sub(Operation.sub(value, s1[0][j-1]), s2[s][j-1]);
                        // - set value
                        cWays[0][j] = value;
                    }
                }
            }
            // - clear occupied cells 
            for (int i = 0; i < n; i++) {
                int[] bi = board[i];
                for (int j = 0; j < n; j++) {
                    if (bi[j] != EMPTY) {
                        cWays[i][j] = 0;
                    }
                }
            }
            int[][] tmp = ways;
            ways = cWays;
            cWays = tmp;
        }
        int result = 0;
        for (int i = 0; i < n; i++) {
            int[] wi = ways[i];
            for (int j = 0; j < n; j++) {
                result = Operation.add(result, wi[j]);
            }
        }
        System.out.println(result);
    }
}

public class Solution {
    static public void main(String[] args) {
        try {
            BufferedReader br = new BufferedReader(new InputStreamReader(System.in), 64 << 10);
            int testsNumber = Integer.parseInt(br.readLine().trim());
            for (int test = 0; test < testsNumber; test++) {
                StringTokenizer tokenizer = new StringTokenizer(br.readLine());
                int n = Integer.parseInt(tokenizer.nextToken());
                int m = Integer.parseInt(tokenizer.nextToken());
                int s = Integer.parseInt(tokenizer.nextToken());
                String[] board = new String[n];
                for (int i = 0; i < n; i++) {
                    board[i] = br.readLine().trim();
                }
                new FairyChessSolver(n, m, s, board).solve();
            }
        }
        catch (Exception e) {
            System.err.println("Error:" + e.getMessage());
        }
    }
}