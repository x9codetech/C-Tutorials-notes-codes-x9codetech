#include<stdio.h>

int main(int argc, char const *argv[])
{
    int arr[10] = {5, 2, 8, 1, 7, 3, 10, 4, 9, 6};

    // printf("The 3rd indexed value is: %d", arr[2]);

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
