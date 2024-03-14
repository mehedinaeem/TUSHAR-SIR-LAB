import java.util.Scanner;

class RectArea {
    double length;
    double width;

    // Method to get input data from the user
    public void getData() {
        Scanner input = new Scanner(System.in);
        System.out.print("Enter length: ");
        length = input.nextDouble();
        System.out.print("Enter width: ");
        width = input.nextDouble();
    }

    // Method to compute the area of the rectangle
    public double computeField() {
        return length * width;
    }

    // Method to display the calculated area
    public void fieldDisplay(double area) {
        System.out.println("Area of the rectangle: " + area + "\n");
    }
}

public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.println("Do u want to calculate area: ");
        System.out.println("1.YES: ");
        System.out.println("0.NO EXIT: ");
        System.out.print("Enter option: ");
        while (true) {

            int op = input.nextInt();
            if (op == 1) {
                RectArea rectangle = new RectArea();

                // Get data for the rectangle
                rectangle.getData();

                // Compute the area of the rectangle
                double area = rectangle.computeField();

                // Display the calculated area
                rectangle.fieldDisplay(area);
                System.out.println("Do u want to calculate area Again: ");
                System.out.println("1.YES: ");
                System.out.println("0.NO EXIT: ");
                System.out.print("Enter option: ");

            } else {
                System.out.println("Terminate");
                return;
            }
        }
    }
}
