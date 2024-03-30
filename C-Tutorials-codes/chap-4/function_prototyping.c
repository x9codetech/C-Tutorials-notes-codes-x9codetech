#include<stdio.h>
//function prototyping
int addNumbers(int a, int b);

int main()
{
    int x =5, y= 10;
    int result = addNumbers(x, y);

    printf("The sum is:%d\n", result);
    return 0;
}

int addNumbers(int a, int b){
    return a+b;
}
