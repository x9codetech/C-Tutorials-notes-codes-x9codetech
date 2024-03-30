#include<stdio.h>
int main(){

    // char name[50];
    // printf("Enter your name\n");
    // scanf("%s", name);
    // printf("Hello, %s", name);

    printf("How are you!\n");
    char sentence[100];
    gets(sentence);

    puts("you entered :");
    puts(sentence);

    return 0;
}
