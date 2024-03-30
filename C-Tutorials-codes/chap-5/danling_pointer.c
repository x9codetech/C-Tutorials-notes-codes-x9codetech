#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    // Allocate memory for an integer
    int *ptr = (int *)malloc(sizeof(int));
    if (ptr == NULL)
    {
        // Error handling
        printf("Memory allocation failed");
    }
    else
    {
        // Memory allocation successful
        *ptr = 93;
        printf("Value: %d\n", *ptr);
    }

    free(ptr);

    printf("Value: %d", *ptr);

    return 0;
}
