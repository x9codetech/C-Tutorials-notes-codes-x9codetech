#include<stdio.h>

struct Point
{
    int x;
    int y;
};


int main(int argc, char const *argv[])
{
    struct Point p;

    p.x = 12;
    p.y = 17;

    printf("X value is:%d\n", p.x);
    printf("Y value is:%d", p.y);

    return 0;
}
