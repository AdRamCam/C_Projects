#include <stdio.h>
#include <stdlib.h>

int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
int divide(int a, int b);

int main() {
    while (1) {
        int a, b;
        char operator;

        printf("Enter an expression: ");
        if (scanf("%d %c %d", &a, &operator, &b) != 3) {
            // quit
            if (scanf("%s", &operator) == 1 && operator == 'q') {
                printf("Goodbye!\n");
                break;
            }
            printf("Invalid input.\n");
            while (getchar() != '\n'); // Clear the input buffer
            printf("--------------------\n");
            continue;
        } 

        if (operator == '/' && b == 0) {
            printf("Division by zero is not allowed\n");
            continue;
        }

        switch(operator) {
            case '+':
                printf("Result: %d\n", add(a, b));
                break;
            case '-':
                printf("Result: %d\n", subtract(a, b));
                break;
            case '*':
                printf("Result: %d\n", multiply(a, b));
                break;
            case '/':
                printf("Result: %d\n", divide(a, b));
                break;
            default:
                printf("Invalid operator\n");
        };
        printf("--------------------\n");
    }
    exit(0);
}

int add (int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

int divide(int a, int b) {
    return a / b;
}