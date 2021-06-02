import java.io.PrintStream;
import java.util.Arrays;
import java.util.Scanner;

public class KnightLChessboard {

	private final Scanner in;
    private final PrintStream out = System.out;

    public static void main(String[] args) throws Exception {
        Solution solution = null;
        try {
            solution = new Solution();
            solution.run();
        } finally {
            if (solution != null) {
                solution.close();
            }
        }
    }

    public Solution() {
        in = new Scanner(System.in);
    }

    private void close() {
        in.close();
    }

    private void run() {
        int n = in.nextInt();
        int[][] result = solve(n);
        for (int i = 0; i < n-1; i++) {
            for (int j = 0; j < n-1; j++) {
                out.print(result[i][j]);
                out.print(" ");
            }
            out.println();
        }
    }

    public int[][] solve(int n) {
        int[][] result = new int[n - 1][n - 1];
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j <= i; j++) {
                result[i][j] = findMinimalStepCount(i + 1, j + 1, n);
                if (result[i][j] == Integer.MAX_VALUE) {
                    result[i][j] = -1;
                }
                result[j][i] = result[i][j];
            }
        }
        return result;
    }

    private int[][] field;

    private static class Step {

        int x;
        int y;

        public Step(int x, int y) {
            this.x = x;
            this.y = y;
        }

    }

    private Step[] steps;

    public int findMinimalStepCount(int i, int j, int n) {
        clearSearchField(n);
        steps = generateSteps(i, j);
        find(0, 0, n);
        return field[n - 1][n - 1];
    }

    private void clearSearchField(int n) {
        field = new int[n][n];
        for (int i = 0; i < n; i++) {
            Arrays.fill(field[i], Integer.MAX_VALUE);
        }
        field[0][0] = 0;
    }

    private Step[] generateSteps(int i, int j) {
        if (i == j) {
            return new Step[]{
                new Step(i, i),
                new Step(i, -i),
                new Step(-i, i),
                new Step(-i, -i)
            };
        }
        return new Step[]{
            new Step(i, j),
            new Step(i, -j),
            new Step(-i, j),
            new Step(-i, -j),
            new Step(j, i),
            new Step(j, -i),
            new Step(-j, i),
            new Step(-j, -i)
        };
    }

    private void find(int x, int y, int n) {
        if (x == n - 1 && y == n - 1) {
            return;
        }
        for (Step step : steps) {
            int nextX = x + step.x;
            int nextY = y + step.y;
            if (isValid(nextX, n) && isValid(nextY, n)) {
                int minSteps = field[x][y] + 1;
                if (field[nextX][nextY] > minSteps) {
                    field[nextX][nextY] = minSteps;
                    find(nextX, nextY, n);
                }
            }
        }
    }

    private boolean isValid(int value, int n) {
        return value >= 0 && value < n;
    }

}