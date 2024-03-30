#include<stdio.h>

int main(int argc, char const *argv[])
{
    int num = 29;

    void *voidVariable;

    voidVariable = &num;

    int *ptr = (int*)voidVariable;

    printf("Integer value is: %d", *ptr);
    return 0;
}
