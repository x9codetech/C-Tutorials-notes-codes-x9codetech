#include<stdio.h>

int main(int argc, char const *argv[])
{
    int i, n = 10, j, temp;
    int arr[10] = {5, 2, 8, 1, 7, 3, 10, 4, 9, 6};
    //bubble sort
    for (i = 0; i < n-1; i++)
    {
        for (j = 0; j < n-i-1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
            
        }
        
    }
    
    printf("Sorted array in ascending order:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    




    return 0;
}
