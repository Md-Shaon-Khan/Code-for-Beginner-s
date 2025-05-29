#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void displayMenu() {
    printf("\nCalculator Menu:\n");
    printf("+ : Addition\n");
    printf("- : Subtraction\n");
    printf("* : Multiplication\n");
    printf("/ : Division\n");
    printf("^ : Power\n");
    printf("r : Square root (only first number used)\n");
    printf("% : Modulus (integers only)\n");
    printf("l : Logarithm (base 10, only first number used)\n");
    printf("s : Sine (only first number used, in radians)\n");
    printf("c : Cosine (only first number used, in radians)\n");
    printf("q : Quit\n");
}

int main() {
    double num1, num2, result;
    char op;
    char choice = 'y';

    while (choice == 'y' || choice == 'Y') {
        displayMenu();
        printf("Enter an expression (e.g., 5 + 3 or 4 r 0 for square root): ");
        scanf("%lf %c", &num1, &op);

        if (op != 'r' && op != 'l' && op != 's' && op != 'c') {
            scanf("%lf", &num2);
        }

        switch (op) {
            case '+':
                result = num1 + num2;
                break;
            case '-':
                result = num1 - num2;
                break;
            case '*':
                result = num1 * num2;
                break;
            case '/':
                if (num2 != 0)
                    result = num1 / num2;
                else {
                    printf("Error: Division by zero\n");
                    continue;
                }
                break;
            case '^':
                result = pow(num1, num2);
                break;
            case 'r':
                if (num1 >= 0)
                    result = sqrt(num1);
                else {
                    printf("Error: Cannot compute square root of a negative number\n");
                    continue;
                }
                break;
            case '%':
                if ((int)num2 == 0) {
                    printf("Error: Modulus by zero\n");
                    continue;
                }
                result = (int)num1 % (int)num2;
                break;
            case 'l':
                if (num1 > 0)
                    result = log10(num1);
                else {
                    printf("Error: Logarithm undefined for non-positive numbers\n");
                    continue;
                }
                break;
            case 's':
                result = sin(num1);
                break;
            case 'c':
                result = cos(num1);
                break;
            case 'q':
                exit(0);
            default:
                printf("Error: Invalid operator\n");
                continue;
        }

        printf("Result: %.6lf\n", result);
        printf("Do you want to perform another calculation? (y/n): ");
        scanf(" %c", &choice);
    }

    return 0;
}
