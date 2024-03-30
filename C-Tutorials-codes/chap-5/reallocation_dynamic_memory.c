#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    // Allocate memory for an array of 3 integers
    int *ptr = (int *)malloc(3 * sizeof(int));

    if (ptr == NULL)
    {
        // Error handling
        printf("Memory allocation failed");
    }
    else
    {
        // Memory allocation successful
        for (int i = 0; i < 3; i++)
        {
            ptr[i] = i + 1;
        }
        printf("Array (before reallocation): ");
        for (int i = 0; i < 3; i++)
        {
            printf("%d ", ptr[i]);
        }

        // Reallocate memory for an array of 5 integers
        int *newPtr = (int *)realloc(ptr, 5 * sizeof(int));

        if (newPtr == NULL)
        {
            // Error handling
            printf("\nMemory reallocation failed");
        }
        else
        {
            // Memory reallocation successful
            ptr = newPtr;
            for (int i = 3; i < 5; i++)
            {
                ptr[i] = i + 1;
            }
            printf("\nArray (after reallocation): ");
            for (int i = 0; i < 5; i++)
            {
                printf("%d ", ptr[i]);
            }
        }
    }

    // Free allocated memory
    free(ptr);
    return 0;
}
