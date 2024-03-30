#include<stdio.h>

int factorial(int n){
       //base case
    if (n == 1 || n == 0){
        return 1;
    }
    else{
        //Recursive case: n! = n*factorial(n-1)!
        return n * factorial( n - 1);
    }  
}

int main(){

    int num;
    printf("Enter a non-negative number: ");
    scanf("%d", &num);

    if (num < 0){
        printf("Please enter positive number.");
    }
    else{
        printf("The factorial of %d is: %d", num, factorial(num));
    }
    
    
    return 0;
}
