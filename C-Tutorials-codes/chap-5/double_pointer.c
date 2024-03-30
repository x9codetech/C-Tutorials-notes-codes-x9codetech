#include<stdio.h>

int main(int argc, char const *argv[])
{
    int number = 22;

    int *ptr1 = &number;

    int **ptr2 = &ptr1;

    printf("The value of number is: %d\n", number);
    printf("The value of ptr1 is: %d\n", *ptr1);
    printf("The value of ptr2 is: %d\n", **ptr2);

    **ptr2 = 99;
    printf("The value of ptr2 is: %d\n", **ptr2);

    return 0;
}
