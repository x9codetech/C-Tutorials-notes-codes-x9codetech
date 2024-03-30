#include<stdio.h>

int main(int argc, char const *argv[])
{
    int *ptr = NULL;

    ptr = (int*) malloc(sizeof(int));

    if (ptr != NULL){
        *ptr = 43;

        printf("the new value stored in the allocated memory is: %d", *ptr);
    }
    else
    {
        printf("Memory allocation failed");
    }

    return 0;
}
