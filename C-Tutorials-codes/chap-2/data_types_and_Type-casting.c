#include<stdio.h>
#include<stdbool.h>

int main(){
    int num1 = 5;
    float num2 = 8.5;
    double PI = 3.14;
    char alphabet = 'A';
    bool is_false = false;
    bool is_true = true;

    printf("This is int data as: %d\n", num1);
    printf("This is float data as: %f\n", num2);
    printf("This is double data as: %lf\n", PI);
    printf("This is char data as: %c\n", alphabet);
    printf("This is bool false: %d\n", is_false);
    printf("This is bool true: %d\n", is_true);

    float sum = (float)(num1 + num2);
    printf("The sum is: %f", sum);

    return 0;
}