
import java.util.Scanner;

public class SumCalculator {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String userResponse;

        do {
            // Prompt user to enter two numbers
            System.out.print("Enter the first number: ");
            int num1 = scanner.nextInt();

            System.out.print("Enter the second number: ");
            int num2 = scanner.nextInt();

            // Add the numbers and display the sum
            int sum = num1 + num2;
            System.out.println("The sum is: " + sum);

            // Ask the user if they want to continue
            System.out.print("Do you want to continue? (yes/no): ");
            userResponse = scanner.next();

        } while (userResponse.equalsIgnoreCase("yes"));  // Repeat if the user enters "yes"

        System.out.println("Thank you for using the calculator!");
        scanner.close();
    }
    
}
