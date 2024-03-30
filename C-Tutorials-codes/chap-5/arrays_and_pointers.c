#include<stdio.h>

int main()
{
    int numbers[] = {7, 4, 9, 2, 5};
    int *ptr = numbers; //pointer pointing to the first elements of the array

    // printf("First Element: %d\n", numbers[0]);
    // printf("First Element: %d\n", *ptr);
    // printf("Second Element: %d\n", *(ptr+1));

    for (size_t i = 0; i < 5; i++)
    {
        printf("Element %d: %d\n", i, *( ptr + i ) );
    }
    




    return 0;
}
