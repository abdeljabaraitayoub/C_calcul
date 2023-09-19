#include <stdio.h>

int main() {
    int a; // The selected operation
    int b; // The first operand
    int c; // The second operand
    int result; // The result of the opration
    char repeat = 'y'; // Repeat command

    do {
        // the available operations
         printf("\t\t\t\t\t\tFirst calucator. \n");
        printf("Available operations:\n");
        printf("\t[1]: Addition\n");
        printf("\t[2]: Subtraction\n");
        printf("\t[3]: Multiplication\n");
        printf("\t[4]: Division\n");

        // user choice
        printf("Enter the operation you want to perform (1-4): ");
        scanf("%d", &a);

        // Check if the input is valid (1-4)
        if (a < 1 || a > 4) {
            printf("Invalid choice. Please enter a number between 1 and 4.\n");
            continue; // Go back to the beginning of the loop
        }

        // Get operands from the user
        printf("Enter the first operand: ");
        scanf("%d", &b);
        printf("Enter the second operand: ");
        scanf("%d", &c);

        // Perform the selected operation
        switch (a) {
            case 1: // Addition
                result = b + c;
                printf("%d + %d = %d\n", b, c, result);
                break;
            case 2: // Subtraction
                result = b - c;
                printf("%d - %d = %d\n", b, c, result);
                break;
            case 3: // Multiplication
                result = b * c;
                printf("%d * %d = %d\n", b, c, result);
                break;
            case 4: // Division
                if (c != 0) {
                    result = b / c;
                    printf("%d / %d = %d\n", b, c, result);
                }
                break;
        }

        // Ask if the user wants to repeat
        printf("Do you want to perform another operation? (y/n): ");
        scanf(" %c", &repeat);

    } while (repeat == 'y' || repeat == 'Y');

    return 0;
}
