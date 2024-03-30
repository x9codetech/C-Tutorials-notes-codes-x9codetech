/*Question 1:
Write a C program to find the sum of all elements in an array.


#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    printf("Sum of array elements: %d\n", sum);

    return 0;
}
*/





/* Question 2:
    Write a C program to find the largest element in an array.


#include <stdio.h>

int main() {
    int arr[] = {10, 5, 8, 20, 15};
    int n = sizeof(arr) / sizeof(arr[0]);
    int max = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    printf("Largest element in array: %d\n", max);

    return 0;
}
*/




/*Question 3:
Write a C program to find the length of a string.

#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "X9 codetech";
    int length = strlen(str);

    printf("Length of string: %d\n", length);

    return 0;
}

*/




/*Question 4:
Write a C program to check if a number is prime using a function.

#include <stdio.h>
#include <stdbool.h>

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    int num = 14;

    if (isPrime(num)) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}

*/



/*
Question 5:
Write a C program to calculate the sum of digits of a number using recursion.

#include <stdio.h>

int sumOfDigits(int n) {
    if (n == 0) {
        return 0;
    } else {
        return n % 10 + sumOfDigits(n / 10);
    }
}

int main() {
    int num = 12345;
    printf("Sum of digits: %d\n", sumOfDigits(num));

    return 0;
}


*/





/*Question 6:
Write a C program to find the Fibonacci series up to n terms using recursion.
#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int terms = 5;
    
    printf("Fibonacci series up to %d terms: ", terms);
    for (int i = 0; i < terms; i++) {
        printf("%d ", fibonacci(i)); // 0 1 1 2 3
    }

    return 0;
}

*/