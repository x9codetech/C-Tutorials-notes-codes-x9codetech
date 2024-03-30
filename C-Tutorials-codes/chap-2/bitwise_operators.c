#include<stdio.h>

int main(int argc, char const *argv[])
{
    int result;

    //AND Bitwise Operator
    // 5 = 0101
    // 7 = 0111
    // & = 0101
    result = 5 & 7;
    printf("The result for bitwise_AND of 5 and 7 is :%d\n", result);

    //OR Bitwise Operator
    // 5 = 0101
    // 7 = 0111
    // | = 0111
    result = 5 | 7;
    printf("The result for bitwise_OR of 5 and 7 is :%d\n", result);

    //XOR Bitwise Operator
    // 5 = 0101
    // 7 = 0111
    // ^ = 0010
    result = 5 ^ 7;
    printf("The result for bitwise_XOR of 5 and 7 is :%d\n", result);

    //NOT Bitwise Operator
    // 5 = 0101
    // ~ = 1010
    result = ~5;
    printf("The result for bitwise_NOT of 5 is :%d\n", result);

    //Left-shift Bitwise Operator
    // 5 = 0101
    // << = 10100
    result = 5 << 2;
    printf("The result of left-shift for 5 is, %d\n", result);

    //Right-shift Bitwise Operator
    // 7 = 0111
    // >> = 0011
    result = 7 >> 1;
    printf("The result of Right-shift for 7 is, %d\n", result);


    return 0;
}
