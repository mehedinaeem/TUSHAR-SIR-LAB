import java.util.Scanner;

public class Mat_op {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        System.out.print("Enter number of rows for matrix 1: ");
        int r1 = input.nextInt();
        System.out.print("Enter number of columns for matrix 1: ");
        int c1 = input.nextInt();

        int[][] A = new int[r1][c1];

        System.out.print("Enter number of rows for matrix 2: ");
        int r2 = input.nextInt();
        System.out.print("Enter number of columns for matrix 2: ");
        int c2 = input.nextInt();

        int[][] B = new int[r2][c2];

        System.out.println("Take the 1st matrix:");
        getMatrixElements(input, A, r1, c1);

        System.out.println("Take the 2nd matrix:");
        getMatrixElements(input, B, r2, c2);

        System.out.println("The 1st matrix is:");
        displayMatrix(A, r1, c1);

        System.out.println("The 2nd matrix is:");
        displayMatrix(B, r2, c2);

        System.out.println("The sum of matrices is:");
        sum_of_mat(A, B, r1, c1);

        System.out.println("The sub of matrices is:");
        sub_of_mat(A, B, r1, c1);

        System.out.println("The Multi of matrices is:");
        multi_of_mat(A, B, r1, c1, r2, c2);

        input.close();
    }

    // Input matrices
    public static void getMatrixElements(Scanner input, int[][] matrix, int rows, int cols) {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                matrix[i][j] = input.nextInt();
            }
        }
    }

    // Display matrices
    public static void displayMatrix(int[][] matrix, int rows, int cols) {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                System.out.print(matrix[i][j] + " ");
            }
            System.out.println();
        }
    }

    // Summation of matrices
    public static void sum_of_mat(int A[][], int B[][], int r, int c) {
        int C[][] = new int[r][c];
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                C[i][j] = A[i][j] + B[i][j];
                System.out.print(C[i][j] + " ");
            }
            System.out.print("\n");
        }
    }

    // Subtraction of matrices
    public static void sub_of_mat(int A[][], int B[][], int r, int c) {
        int C[][] = new int[r][c];
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                C[i][j] = A[i][j] - B[i][j];
                System.out.print(C[i][j] + " ");
            }
            System.out.print("\n");
        }
    }

    // Multiplication of matrices
    public static void multi_of_mat(int A[][], int B[][], int r1, int c1, int r2, int c2) {
        int C[][] = new int[r1][c2];
        for (int i = 0; i < r1; i++) {
            for (int j = 0; j < c2; j++) {
                C[i][j] = 0;
                for (int k = 0; k < c1; k++) {
                    C[i][j] += A[i][k] * B[k][j];
                }
                System.out.print(C[i][j] + " ");
            }
            System.out.print("\n");
        }
    }
}
