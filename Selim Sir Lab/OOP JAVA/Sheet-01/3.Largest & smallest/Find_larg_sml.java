import java.util.Scanner;

public class Find_larg_sml {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        while (true) {
            System.out.println("Do you want to find the max or min?");
            System.out.println("Enter 1: (MAX OR MIN)");
            System.out.println("Enter 0: (EXIT)");
            System.out.print("Enter option: ");
            int op = input.nextInt();

            if (op == 1) {
                // System.out.print("Enter the size of the array: ");
                // int size = input.nextInt();
                int[] a = new int[1000]; 

                int i = 0;
                while (true) {
                    System.out.print("Enter " + i + "th element of array: ");
                    int x = input.nextInt();
                    a[i] = x;

                    if (x == -1)
                        break;

                    i++;
                }

                System.out.println("The max num= " + max(a) + " and min= " + min(a) + "\n");

                // Clear the array
                for (int j = 0; j < a.length; j++) {
                    a[j] = 0;
                }

            } else {
                System.out.println("Terminate");
                return;
            }
        }
    }

    // Function to find the maximum value in the array
    public static int max(int[] arr) {
        int max = arr[0];
        for (int i = 1; i < arr.length; i++) {
            if (arr[i] > max) {
                max = arr[i];
            }
        }
        return max;
    }

    // Function to find the minimum value in the array
    public static int min(int[] arr) {
        int min = arr[0];
        for (int i = 1; i < arr.length; i++) {
            if (arr[i] < min) {
                min = arr[i];
            }
        }
        return min;
    }
}
