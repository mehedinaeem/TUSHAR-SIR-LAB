import java.util.Scanner;
import static java.lang.Math.sqrt;

public class Triangle {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        while (true) {
            System.out.println("Select option:");
            System.out.println("1.Calculate Area: ");
            System.out.println("0.Exit:");
            System.out.print("Enter Option: ");
            int op = input.nextInt();

            if (op == 1) {
                float sum = 0;
                float[] a = new float[3]; // Correct array declaration
                for (int i = 0; i < 3; i++) {
                    System.out.print("Enter triangle " + (i + 1) + "th side: ");
                    float x = input.nextFloat();
                    a[i] = x;
                    sum += x;
                }
                float s = sum / 2;
                float pre_area = s * (s - a[0]) * (s - a[1]) * (s - a[2]);
                if (pre_area >= 0) {
                    float area = (float) sqrt(pre_area);
                    System.out.println("The area of Triangle is: " + area + "\n");
                } else {
                    System.out.println("The triangle is not possible");
                }
            } else {
                return;
            }

        }
    }
}
