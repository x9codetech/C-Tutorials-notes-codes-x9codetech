#include<stdio.h>

int main(int argc, char const *argv[])
{
    int i= 1;
    int j= 1;

    do{
        do{
            printf("(%d, %d)", i, j);
            i++;
            j++;
        }while (j <= 3);

    } while (i <= 3);


    return 0;
}
