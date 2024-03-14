import java.util.Scanner;

public class matrix {
    public static void main(String[] args) {
        while(true)
        {
            System.out.print("What do u want: ");
            System.out.print("1.Summation: ");
            System.out.print("2.Subtraction:");
            System.out.print("1.Multiflication: ");
            System.out.print("2.Division: ");

            int op=input.nextInt()
            {
                if(op==1)
                {
                    input_matrix();
                    summation()
                }
            }

        }
    }

    // input matrix
    input_matrix(){
        System.out.print("Enter row: ");
        int r=input.nextInt();

        System.out.print("Enter column: ");
        int c=input.nextInt();

        int A[r][c];

        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                System.out.print("Enter element at position (" + i + " " + j + "): ");
                A[i][j] = input.nextInt();
            }
        }
        return A;
    }
}
