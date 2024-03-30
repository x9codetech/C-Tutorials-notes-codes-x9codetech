#include<stdio.h>

struct Point
{
    int x;
    int y;
};


int main(int argc, char const *argv[])
{
    struct Point point = {10, 20};
    struct Point *ptrPoint = &point;

    printf("The values before adding are: (%d, %d)\n", ptrPoint->x, ptrPoint->y);

    ptrPoint->x += 5;
    ptrPoint->y += 10;

    printf("The values After adding are: (%d, %d)\n", ptrPoint->x, ptrPoint->y);

    return 0;
}
