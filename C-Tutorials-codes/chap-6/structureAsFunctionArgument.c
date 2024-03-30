#include<stdio.h>

struct Rectangle
{
    int length;
    int width;
};

int calculateArea(struct Rectangle rect){
    return rect.length * rect.width;
}


int main(int argc, char const *argv[])
{
    struct Rectangle myRect;

    myRect.length = 5;
    myRect.width  = 3;

    int area = calculateArea(myRect);

    printf("The area of Rectangle is: %d", area);

    return 0;
}
