#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{

    // Allocate memory for an array of 5 integers
    int *ptr = (int *)calloc(5, sizeof(int));
    if (ptr == NULL)
    {
        // Error handling
        printf("Memory allocation failed");
    }
    else
    {
        // Memory allocation successful
        for (int i = 0; i < 5; i++)
        {
            ptr[i] = i + 1;
        }
        printf("Array: ");
        for (int i = 0; i < 5; i++)
        {
            printf("%d ", ptr[i]);
        }
    }
    return 0;
}
