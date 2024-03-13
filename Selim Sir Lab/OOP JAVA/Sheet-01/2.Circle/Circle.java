import java.util.Scanner;

public class Circle {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        while (true) {
            System.out.println("Do you want to calculate the area?");
            System.out.println("Enter 1: (YES)");
            System.out.println("Enter 0: (NO)");
            System.out.print("Enter option: ");
            int option = input.nextInt();

            if (option == 1) {
                System.out.print("Enter radius: ");
                float radius = input.nextFloat();
                double area = Math.PI * radius * radius; 
                System.out.println("The area of the circle is: " + area + "\n");
                System.out.flush(); 
            } else {
                System.out.println("The program is Terminate");
                return;
            }
        }
    }
}
