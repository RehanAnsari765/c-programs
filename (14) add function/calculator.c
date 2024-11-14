#include <stdio.h>

void main() {
    int choice;
    float num1, num2, result;

    // Display menu for user to select an operation
    printf("Select a category:\n");
    printf("1. Addition (+)\n");
    printf("2. Subtraction (-)\n");
    printf("3. Multiplication (*)\n");
    printf("4. Division (/)\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    // Prompt the user to enter two numbers
    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    // Perform the selected operation
    switch (choice) {
        case 1:  // Addition
            result = num1 + num2;
            printf("Result of %.2f + %.2f = %.2f\n", num1, num2, result);
            break;
        case 2:  // Subtraction
            result = num1 - num2;
            printf("Result of %.2f - %.2f = %.2f\n", num1, num2, result);
            break;
        case 3:  // Multiplication
            result = num1 * num2;
            printf("Result of %.2f * %.2f = %.2f\n", num1, num2, result);
            break;
        case 4:  // Division
            if (num2 != 0) {
                result = num1 / num2;
                printf("Result of %.2f / %.2f = %.2f\n", num1, num2, result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Invalid choice. Please select a valid option.\n");
    }
}
