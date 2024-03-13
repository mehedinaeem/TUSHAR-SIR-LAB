import java.util.Scanner;

public class Rectangle {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        while (true) {
            System.out.println("Do you want to calculate the area?");
            System.out.println("Enter 1: (YES)");
            System.out.println("Enter 0: (NO)");
            System.out.print("Enter option: ");
            int op = input.nextInt();

            if (op == 1) {
                System.out.print("Enter base:");
                float b = input.nextFloat();
                System.out.print("Enter height:");
                float h = input.nextFloat();
                float area = b * h;
                System.out.println("The area of Rectangle is:" + area + "\n");
            } else {
                System.out.println("Terminate the program");
                return;
            }
        }
    }
}
