//Written by me
package NQueens;
import java.util.Arrays;

public class test {
    int n = 4;
    int[] x = new int[n];   // 0-based indexing

    public boolean valid(int row, int column) {
        for (int i = 0; i < row; i++) {
            if (x[i] == column) return false;

            if (Math.abs(i - row) == Math.abs(x[i] - column))
                return false;
        }
        return true;
    }

    public void NQueen(int k) {
        for (int i = 0; i < n; i++) {
            if (valid(k, i)) {
                x[k] = i;

                if (k == n - 1) {
                    System.out.println(Arrays.toString(x));
                } else {
                    NQueen(k + 1);
                }
            }
        }
    }

    public static void main(String[] args) {
        test obj = new test();
        obj.NQueen(0);
    }
}
