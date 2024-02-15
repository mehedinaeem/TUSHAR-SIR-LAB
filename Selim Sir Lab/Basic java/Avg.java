import java.util.Scanner;

public class Avg {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        double sum = 0;
        int n, count = 0;
        while (true) {
            System.out.print("Enter number: ");
            n = input.nextInt();
            if (n < 0)
                break;
            sum += n;

            count++;
        }
        System.out.println("The avg is: " + (sum / count));
    }
}
