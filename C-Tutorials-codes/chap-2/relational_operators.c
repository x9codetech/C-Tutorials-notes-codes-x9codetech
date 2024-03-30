#include<Stdio.h>

int main(){
    int x = 5, y = 10, z = 5;

    int a = x ==y;
    int b = x !=z;
    int c = x > y;
    int d = x < z;
    int f = x >=y;
    int g = x <=z;

    printf("The answer of x == y is : %d\n", a);
    printf("The answer of x != z is : %d\n", b);
    printf("The answer of x > y is : %d\n", c);
    printf("The answer of x < z is : %d\n", d);
    printf("The answer of x >= y is : %d\n", f);
    printf("The answer of x <= z is : %d\n", g);



    return 0;
}
