#include <stdio.h>
int main(int argc, char const *argv[])
{
    int x = 5, y = 10, z = 5;

    int a = x != y;
    int b = x == z;
    int c = x > y;
    int d = x < z;

    printf("The answer of a =( x != y ) is : %d\n", a);
    printf("The answer of b =( x == z ) is : %d\n", b);
    printf("The answer of c =( x > y ) is : %d\n", c);
    printf("The answer of d =( x < z ) is : %d\n\n\n", d);

    int true_AND = a && b;
    int true_OR = a || c;
    int true_NOT = a != c;

    printf("The answer of true_AND is : %d\n", true_AND);
    printf("The answer of true_OR is : %d\n", true_OR);
    printf("The answer of true_NOT is : %d\n\n", true_NOT);

    int false_AND = a && c;
    int false_OR = d || c;
    int false_NOT = a != b;

    printf("The answer of false_AND is : %d\n", false_AND);
    printf("The answer of false_OR is : %d\n", false_OR);
    printf("The answer of false_NOT is : %d\n\n", false_NOT);

    return 0;
}
