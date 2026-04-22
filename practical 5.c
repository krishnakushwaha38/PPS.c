#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr = NULL;
    int size = 0, newsize, choice, i;

    while (1)
    {
        printf("\n--- Dynamic Array Operations ---");
        printf("\n1. Create array");
        printf("\n2. Insert elements");
        printf("\n3. Resize array");
        printf("\n4. Display array");
        printf("\n5. Free and exit");
        printf("\nEnter choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter size: ");
            scanf("%d", &size);
            if (arr != NULL)
            {
                free(arr);
            }
            arr = (int *)malloc(size * sizeof(int));
            if (arr == NULL)
            {
                printf("Memory allocation failed!\n");
                exit(1);
            }
            printf("Array created successfully.\n");
            break;

        case 2:
            if (arr == NULL)
            {
                printf("Create array first!\n");
                break;
            }
            printf("Enter %d elements:\n", size);
            for (i = 0; i < size; i++)
            {
                scanf("%d", &arr[i]);
            }
            break;

        case 3:
            if (arr == NULL)
            {
                printf("Create array first!\n");
                break;
            }
            printf("Enter new size: ");
            scanf("%d", &newsize);
            int *temp = (int *)realloc(arr, newsize * sizeof(int));

            if (temp == NULL)
            {
                printf("Reallocation failed!\n");
                break; 
            }
            arr = temp;
            size = newsize;
            printf("Array resized successfully.\n");
            break;

        case 4:
            if (arr == NULL)
            {
                printf("Array not created!\n");
                break;
            }

            printf("Array elements:\n");
            for (i = 0; i < size; i++)
            {
                printf("%d ", arr[i]);
            }
            printf("\n");
            break;

        case 5:
            if (arr != NULL)
            {
                free(arr);
            }
            printf("Memory freed. Exiting...\n");
            return 0;

        default:
            printf("Invalid choice!\n");
        }
    }
}
