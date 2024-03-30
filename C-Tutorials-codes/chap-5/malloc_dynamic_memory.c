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
        *ptr = 91273;
        printf("Value: %d", *ptr);
    }

    free(ptr);


    return 0;
}
