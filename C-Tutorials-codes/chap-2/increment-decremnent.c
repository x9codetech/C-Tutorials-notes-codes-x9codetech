#include<stdio.h>

int main(){
    int num1 = 5, num2 = 10, result;

    //Post-increment
    result = num1++;
    printf("The result is :%d\n", result);
    printf("The value of num1 is :%d\n", num1);

    //Pre-increment
    result = ++num2;
    printf("The result is :%d\n", result);
    printf("The value of num2 is :%d\n\n", num2);

    //Post-decrement
    result = num1--;
    printf("The result is :%d\n", result);
    printf("The value of num1 is :%d\n", num1);

    //Pre-decrement
    result = --num2;
    printf("The result is :%d\n", result);
    printf("The value of num2 is :%d\n", num2);




    return 0;
}
