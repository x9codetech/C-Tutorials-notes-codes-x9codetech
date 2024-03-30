#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a = 7;
    int b = 5;

    
    printf("The value of a before adding with b is: %d\n", a);

    a += b; // a = a + b
    printf("a += b is: %d\n", a);

    a -= b; // a = a - b
    printf("a -= b is: %d\n", a);

    a /= b; // a = a / b
    printf("a /= b is: %d\n", a);
    
    a *= b; // a = a * b
    printf("a *= b is: %d\n", a);

    a %= b; // a = a % b
    printf("a %= b is: %d\n\n\n", a);



    int x = 10, y = 15;

    int max = (x < y)? printf("Yes"):printf("No");



    return 0;
}
