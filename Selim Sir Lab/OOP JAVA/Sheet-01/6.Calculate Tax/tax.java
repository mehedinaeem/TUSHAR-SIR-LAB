import java.util.Scanner;

public class tax {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.println("Do you want to calculate the gross value and total value?");
        System.out.println("Enter 1: (YES)");
        System.out.println("Enter 0: (NO EXIT)");

        while (true) {
            System.out.print("Enter option: ");
            int op = input.nextInt();

            if (op == 1) {
                // Define the net cost of the product
                System.out.print("Enter netcost: ");
                double netCost = input.nextDouble();

                // Define the VAT rate
                double vatRate = 0.23;

                // Calculate the gross value
                double grossValue = netCost * (1 + vatRate);

                // Calculate the value excluding VAT
                double valueExcludingVAT = grossValue / (1 + vatRate);

                // Calculate the total value for 10000 pieces
                double totalValue = valueExcludingVAT * 10000;

                System.out.println("Gross Value: " + grossValue);
                System.out.println("Value Excluding VAT: " + valueExcludingVAT);
                System.out.println("Total Value for 10000 pieces: " + totalValue);

                System.out.println("\nDo you want to calculate the gross value and total value Again?");
                System.out.println("Enter 1: (YES)");
                System.out.println("Enter 0: (NO EXIT)");

            } else {
                System.out.println("Terminate");
                return;
            }
        }
    }
}
