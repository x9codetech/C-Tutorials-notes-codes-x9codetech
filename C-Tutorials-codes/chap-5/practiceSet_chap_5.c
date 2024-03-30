/*Q1:
Using the & and * pointer operators.

#include <stdio.h>

int main(void)
{
       int a = 7;
       int *aPtr = &a; // set aPtr to the address of a

       printf("The address of a is %p \nThe value of aPtr is %p", &a, aPtr);
       printf("\n\nThe value of a is %d \nThe value of *aPtr is %d", a, *aPtr);
       printf("\n\nShowing that * and & are complements of each other\n&*aPtr = %p \n*&aPtr = %p\n", &*aPtr, *&aPtr);

       return 0;
}

*/
/*
Q2:
Cube a variable using pass-by-reference.

#include <stdio.h>
void cubeByReference(int *nPtr); // function prototype

int main()
{
       int number = 5; // initialize number
       printf("The original value of number is %d", number);

       // pass number by value to cubeByValue
       cubeByReference(&number);
       printf("\nThe new value of number is %d\n", number);

       return 0;
}
// calculate cube of *nPtr; actually modifies number in main
void cubeByReference(int *nPtr)
{
       *nPtr = *nPtr * *nPtr * *nPtr; // cube *nPtr
}

*/



/*
Q3;
Converting a string to uppercase using a non-constant pointer to non-constant data.

#include <stdio.h>
#include <ctype.h>

void convertToUppercase(char *sPtr); // prototype

int main(void)
{
    char string[] = "cHaRaCters and $32.98"; // initialize char array
    printf("The string before conversion is: %s", string);
    convertToUppercase(string);
    printf("\nThe string after conversion is: %s\n", string);
}

// convert string to uppercase letters
void convertToUppercase(char *sPtr)
{
    while (*sPtr != '\0')
    {
        *sPtr = toupper(*sPtr); // convert to uppercase
        ++sPtr;                // make sPtr point to the next character
    }
}

*/


/*
Q4;
demonstrating malloc, realloc, and free in dynamic memory allocation
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    // Allocate memory for an initial array of integers
    int *arr = (int *)malloc(3 * sizeof(int));

    if (arr == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        return 1;
    }

    // Initialize the array
    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;

    // Display the initial array
    printf("Initial array: %d, %d, %d\n", arr[0], arr[1], arr[2]);

    // Resize the array using realloc
    arr = (int *)realloc(arr, 5 * sizeof(int));

    if (arr == NULL) {
        fprintf(stderr, "Memory reallocation failed\n");
        return 1;
    }

    // Initialize the new elements in the resized array
    arr[3] = 4;
    arr[4] = 5;

    // Display the resized array
    printf("Resized array: %d, %d, %d, %d, %d\n", arr[0], arr[1], arr[2], arr[3], arr[4]);

    // Free the allocated memory
    free(arr);

    return 0;
}

