#include<stdio.h>
#define age 23

int main(){
    const float pi = 3.14;
    int myAge = 20;
    printf("this is variable value: %d\n", myAge);
    printf("This is preprocessor constant value %d\n", age);
    printf("This is const keyword constant value %.2f\n", pi);

    return 0;
}