#include<stdio.h>

int main(int argc, char const *argv[]){
    
    int numbers[5] = {10, 20, 30, 40, 50};

    printf("one-Dimensional Array:");
    for (int i = 0; i < 5; i++){
        printf("%d ", numbers[i]);
    }
    
    return 0;
}
