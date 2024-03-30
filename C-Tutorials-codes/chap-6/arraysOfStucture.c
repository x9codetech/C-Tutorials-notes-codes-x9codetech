#include<stdio.h>

struct Point
{
    int x;
    int y;
};


int main(int argc, char const *argv[])
{
    struct Point arr[3];

    arr[0].x = 7;
    arr[0].y = 5;

    arr[1].x = 3;
    arr[1].y = 9;

    arr[2].x = 0;
    arr[2].y = 1;

    for (int i = 0; i < 3; i++)
    {
        printf("Array %d: (%d, %d)\n", i+1, arr[i].x, arr[i].y);
    }
    

    return 0;
}
