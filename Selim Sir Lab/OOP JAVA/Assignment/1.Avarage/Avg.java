import java.util.Scanner;

public class Avg {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.println("Do you want to calculate the average?");
        System.out.println("Enter 1: (YES)");
        System.out.println("Enter 0: (NO EXIT)");

        while (true) {
            System.out.print("Enter option: ");
            int op = input.nextInt();

            if (op == 1) {
                double sum = 0;
                int count = 0;

                int i=1;
                while (true) {
                    System.out.print("Enter "+i+"th number(Enter -1 for navigate input): ");
                    double num = input.nextDouble();
                    i++;
                    if (num ==-1)
                        break;
                    sum += num;
                    count++;
                }

                if (count == 0) {
                    System.out.println("No numbers entered.");
                } else {
                    double average = sum / count;
                    System.out.println("The average is: " + average);
                }

                System.out.println("\nDo you want to calculate the average again?");
                System.out.println("Enter 1: (YES)");
                System.out.println("Enter 0: (NO EXIT)");

            } else {
                System.out.println("Terminate");
                return;
            }
        }
    }
}
