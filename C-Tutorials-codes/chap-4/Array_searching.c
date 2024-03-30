#include<stdio.h>

int main(int argc, char const *argv[])
{
    int arr[10] = {5, 2, 8, 1, 7, 3, 10, 4, 9, 6};
    int searchedElement, n= 10;
    printf("Enter a digit to be search in array: \n");
    scanf("%d", &searchedElement);

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == searchedElement)
        {
            printf("element %d found at index %d.\n", searchedElement, i);
        }
        
    }

    printf("Element %d not found in the Array.\n", searchedElement);
    


    return 0;
}