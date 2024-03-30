#include<stdio.h>

void greeting(char string[]){
    printf("String in the function is: %s", string);
}

int main(){
    
    char myString[] = "Hello World";

    greeting(myString);
    return 0;
}
