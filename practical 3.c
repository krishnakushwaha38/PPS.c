#include <stdio.h>
#include <limits.h>

unsigned long long iterativeFactorial(int n) {
    unsigned long long fact = 1;
    for (int i = 1; i <= n; i++)
        fact *= i;
    return fact;
}

unsigned long long recursiveFactorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    return n * recursiveFactorial(n - 1);
}

int main() {
    int choice, num;

    do {
        printf("\nFactorial Calculator");
        printf("\n1. Iterative Method");
        printf("\n2. Recursive Method");
        printf("\n3. Exit");
        printf("\nEnter your choice: ");

        if (scanf("%d", &choice) != 1) {
            printf("Invalid input\n");
            return 0;
        }

        if (choice == 1 || choice == 2) {
            printf("Enter a non-negative integer (0–20): ");
            if (scanf("%d", &num) != 1 || num < 0 || num > 20) {
                printf("Invalid input or value out of range\n");
                continue;
            }

            if (choice == 1)
                printf("Factorial of %d = %llu\n", num, iterativeFactorial(num));
            else
                printf("Factorial of %d = %llu\n", num, recursiveFactorial(num));
        } else if (choice == 3) {
            printf("Exiting Program...\n");
        } else {
            printf("Invalid choice\n");
        }

    } while (choice != 3);

    return 0;
}
