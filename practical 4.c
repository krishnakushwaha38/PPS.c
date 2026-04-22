#include <stdio.h>
#include <string.h>

#define MAX 100

void sort(int a[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - i - 1; j++)
            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
}

int search(int a[], int n, int key) {
    int i;
    for (i = 0; i < n; i++)
        if (a[i] == key)
            return i;
    return -1;
}

int main() {
    int choice, subchoice, n, arr[MAX], key, i, pos;
    char str1[MAX], str2[MAX];

    printf("1. Array Operations\n2. String Operations\nEnter choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("1. Sorting\n2. Searching\nEnter choice: ");
        scanf("%d", &subchoice);

        printf("Enter number of elements: ");
        scanf("%d", &n);

        if (n <= 0 || n > MAX) {
            printf("Invalid input");
            return 0;
        }

        printf("Enter elements: ");
        for (i = 0; i < n; i++)
            scanf("%d", &arr[i]);

        if (subchoice == 1) {
            sort(arr, n);
            printf("Sorted array: ");
            for (i = 0; i < n; i++)
                printf("%d ", arr[i]);
        } else if (subchoice == 2) {
            printf("Enter element to search: ");
            scanf("%d", &key);
            pos = search(arr, n, key);
            if (pos != -1)
                printf("Element found at position %d", pos + 1);
            else
                printf("Element not found");
        } else {
            printf("Invalid choice");
        }
    } else if (choice == 2) {
        printf("1. Concatenation\n2. Comparison\nEnter choice: ");
        scanf("%d", &subchoice);

        printf("Enter first string: ");
        scanf("%s", str1);
        printf("Enter second string: ");
        scanf("%s", str2);

        if (subchoice == 1) {
            strcat(str1, str2);
            printf("Concatenated string: %s", str1);
        } else if (subchoice == 2) {
            int result = strcmp(str1, str2);
            if (result == 0)
                printf("Strings are equal");
            else
                printf("Strings are not equal");
        } else {
            printf("Invalid choice");
        }
    } else {
        printf("Invalid choice");
    }

    return 0;
}
