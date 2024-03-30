#include<stdio.h>

union MyUnion
{
    int x;
    char y;
};


int main(int argc, char const *argv[])
{
    union MyUnion myUnion;

    myUnion.x = 10;
    printf("%d\n", myUnion.x);

    myUnion.y = 'A';
    printf("%c\n", myUnion.y);

    printf("Values after changing\n");
    printf("%d\n", myUnion.x);
    return 0;
}
