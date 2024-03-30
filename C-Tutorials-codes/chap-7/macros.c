#include<stdio.h>

#define PI 3.14
#define AREA(radius) (PI * radius * radius)

int main(int argc, char const *argv[])
{
    int radius = 3;

    float area = AREA(radius);

    printf("The area is: %0.2f\n", area);
    return 0;
}
