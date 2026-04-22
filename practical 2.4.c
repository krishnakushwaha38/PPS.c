#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX 100

void reverseString(char str[]) {
    int i, len;
    char temp;
    len = strlen(str);
    for (i = 0; i < len / 2; i++) {
        temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
    printf("Reversed String: %s\n", str);
}

void toUpperCase(char str[]) {
    int i;
    for (i = 0; str[i] != '\0'; i++)
        str[i] = toupper(str[i]);
    printf("Uppercase String: %s\n", str);
}

void toLowerCase(char str[]) {
    int i;
    for (i = 0; str[i] != '\0'; i++)
        str[i] = tolower(str[i]);
    printf("Lowercase String: %s\n", str);
}

void findLength(char str[]) {
    printf("Length of String: %lu\n", strlen(str));
}

int main() {
    int choice;
    char str[MAX];

    do {
        printf("\n1. Reverse a String");
        printf("\n2. Convert String to Uppercase");
        printf("\n3. Convert String to Lowercase");
        printf("\n4. Find Length of a String");
        printf("\n5. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        getchar();

        if (choice >= 1 && choice <= 4) {
            printf("Enter a string: ");
            fgets(str, MAX, stdin);
            str[strcspn(str, "\n")] = '\0';
        }

        switch (choice) {
            case 1:
                reverseString(str);
                break;
            case 2:
                toUpperCase(str);
                break;
            case 3:
                toLowerCase(str);
                break;
            case 4:
                findLength(str);
                break;
            case 5:
                printf("Exiting Program...");
                break;
            default:
                printf("Invalid Choice");
        }
    } while (choice != 5);

    return 0;
}
