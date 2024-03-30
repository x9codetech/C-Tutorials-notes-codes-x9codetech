#include<stdio.h>

int main(){
    int age =22;
    int *ageValue = &age;

    printf("The value at memory of age is: %d", *ageValue);
    
    return 0;
}