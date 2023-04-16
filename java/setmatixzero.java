import java.util.*;

public class setmatixzero {

    public static void main(String args[]) {
        int n, m, i = 0, j = 0, col = 0, row = 0;

        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();
        m = sc.nextInt();

        int matrix[][] = new int[n][m];

        for (i = 0; i < n; i++) {
            for (j = 0; j < m; j++) {
                matrix[i][j] = sc.nextInt();
            }
        }

        for (i = 0; i < n; i++) {
            for (j = 0; j < m; j++) {
                if (matrix[i][j] == 0) {
                    row = i;
                    col = j;
//error
                }
            }
        }

        for (i = 0; i < n; i++) {
            for (j = 0; j < m; j++) {
                for (int k = 0; k < n; k++) {
                    matrix[k][col] = 0;
                }

                for (int k = 0; k < m; k++) {
                    matrix[row][k] = 0;
                }
            }
        }

        for (i = 0; i < n; i++) {
            for (j = 0; j < m; j++) {
                System.out.print(matrix[i][j] + "\t");
            }

            System.out.println("\n");
        }

    }

}
