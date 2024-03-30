#include<stdio.h>

int main(){
    int x = 10;
    int *ptr = &x; 


    printf("value of ptr: %p\n", *ptr);
    
    return 0;
}
