#include<stdio.h>

int main(int argc, char const *argv[])
{
    int arr[50] = {34, 87, 75, 21, 80};
    int i, n = 5, choice, position, newElement;

    printf("The current array:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    //menu for adding or deletion of elements:
    printf("Menu:\n");    
    printf("1. for insertion\n");    
    printf("2. for deletion \n");    
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        //for insertion
        printf("Enter the position to add the element (0 to %d)", n);
        scanf("%d", &position);

        if (position < 0 || position > n)
        {
            printf("You entered an invalid position:");
            return 1;
        }

        printf("Enter the new element: ");
        scanf("%d", &newElement);

        for (i = n; i > position; i--)
        {
            arr[i] = arr[i - 1];
        }
        arr[position] = newElement;
        n++;

        break;

    case 2:
        //for deletion
        printf("Enter the position to remove the element (0 to %d)", n - 1);
        scanf("%d", &position);

        if (position < 0 || position >= n)
        {
            printf("You entered an invalid position:");
            return 1;
        }

        for (i = position; i < n - 1 ; i++)
        {
            arr[i] = arr[i - 1];
        }
        n--;

        break;
    
    default:
        printf("Invalid choice:");
            return 1;
    }  

    printf("Updated array is:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
