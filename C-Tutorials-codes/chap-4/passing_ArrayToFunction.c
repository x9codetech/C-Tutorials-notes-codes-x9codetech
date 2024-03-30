#include<stdio.h>

void arrayToFunction(int array[],int size){
    for (int i = 0; i < size; i++)    {
        printf("%d ", array[i]);
    }
}

int main(){
    int myArray[5] = {3, 8, 5, 2, 4};

    int size = sizeof(myArray) / sizeof(myArray[0]);
    arrayToFunction(myArray, size);

    return 0;
}
