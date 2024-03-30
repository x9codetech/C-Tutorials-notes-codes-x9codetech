#include<stdio.h>

//global variable
int globalNum = 10;

int main(){
    //local variable
    int mainNum = 5;
    //static variable
    static int StaticVariable = 25;
    {
    printf("%d\n", StaticVariable);
    }

    functionExample();
    return 0;
}

void functionExample(){
    printf("%d\n", globalNum);
}
