#include<stdio.h>

int main(int argc, char const *argv[])
{
    int i = 1;
    int j = 1;

    while (i <= 5){
        while (j <= 5){
            printf("(%d, %d)\n", i, j);
            i++;
            j++;
        }
    }

    return 0;
}
