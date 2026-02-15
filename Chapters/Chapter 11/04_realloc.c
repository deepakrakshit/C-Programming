#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter initial size: ");
    scanf("%d", &n);

    int *ptr = (int *)calloc(n, sizeof(int));

    if (ptr == NULL)
    {
        printf("Memory allocation failed\n");
    }

    else
    {
        // Input initial elements
        printf("Enter %d elements:\n", n);
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &ptr[i]);
        }

        // Print initial array
        printf("Initial array:\n");
        for (int i = 0; i < n; i++)
        {
            printf("%d ", ptr[i]);
        }
        printf("\n");

        // Increase size by 2
        int newSize = n + 2;
        int *temp = (int *)realloc(ptr, newSize * sizeof(int));

        if (temp == NULL)
        {
            printf("Reallocation failed\n");
            free(ptr);
        }

        else
        {

            ptr = temp; // update pointer safely

            // Input new elements
            printf("Enter 2 more elements:\n");
            for (int i = n; i < newSize; i++)
            {
                scanf("%d", &ptr[i]);
            }

            // Print final array
            printf("Final array:\n");
            for (int i = 0; i < newSize; i++)
            {
                printf("%d ", ptr[i]);
            }

            free(ptr);
        }
    }
    return 0;
}
