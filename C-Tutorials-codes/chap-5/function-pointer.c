#include<stdio.h>


int add(int a, int b){
    return a + b;
}

int subtract(int a, int b){
    return a - b;
}

int main()
{
    int (*operator)(int, int);

    operator = add;
    printf("Result of add operator is: %d\n", operator(5, 3));

    operator = subtract;
    printf("Result of subtract operator is: %d", operator(5, 3));

    return 0;
}
