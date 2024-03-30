#include<stdio.h>

// int square(int num){
//     return num*num;
// }

// int main()
// {
//     int x = 5;
//     int squared  = square(x);

//     printf("The squared value of x is: %d", squared);
//     return 0;
// }

void square(int *num){
    *num = (*num) *(*num);
    printf("The squared value of x is: %d", *num);
}

int main()
{
    int x = 6;
    square(&x);

    return 0;
}
