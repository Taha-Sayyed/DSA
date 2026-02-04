package NQueens;
import java.util.Arrays;

public class PrintAllSolutions {
    int[] colArr; // colArr[row] = column_position
    int n;

    public boolean valid(int row, int col) {
        for (int i = 0; i < row; i++) {
            // Check same column OR same diagonal
            if (colArr[i] == col || Math.abs(i - row) == Math.abs(colArr[i] - col)) {
                return false;
            }
        }
        return true;
    }

    public void solve(int row) {
        for (int col = 0; col < n; col++) {
            if (valid(row, col)) {
                colArr[row] = col; // Place queen

                if (row == n - 1) {
                    printSolution();
                } else {
                    solve(row + 1); // Move to next row
                }
                // Backtracking happens automatically here as colArr[row]
                // will be overwritten by the next iteration
            }
        }
    }

    private void printSolution() {
        // Converting to 1-based output to match your original intent
        int[] displayArr = Arrays.stream(colArr).map(i -> i + 1).toArray();
        System.out.println(Arrays.toString(displayArr));
    }

    public static void main(String[] args) {
        PrintAllSolutions obj = new PrintAllSolutions();
        obj.n = 4;
        obj.colArr = new int[obj.n];
        obj.solve(0);
    }
}