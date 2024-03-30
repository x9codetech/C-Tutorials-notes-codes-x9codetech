#include<stdio.h>

int main(int argc, char const *argv[]){
    
    int numbers[20] = {10, 20, 30, 40, 50};

    //finding element using index
    // printf("one-Dimensional Array: %d", numbers[4]);
    
    //printing all the elements of the array
    // for (int i = 0; i < 5; i++){
    //     printf("%d ", numbers[i]);
    // }

    //inserting new element
    // numbers[0] = 5;
    // for (int i = 0; i < 5; i++){
    //     printf("%d ", numbers[i]);
    // }


    //deletion of element
    int deleteIndex = 3;
    for (int i = deleteIndex; i < 5; i++){
        numbers[i] = numbers[i + 1];
    }
    
    printf("Array after deletion is:");
    for (int i = 0; i < 5; i++){
        printf("%d ", numbers[i]);
    }



    
    return 0;
}
