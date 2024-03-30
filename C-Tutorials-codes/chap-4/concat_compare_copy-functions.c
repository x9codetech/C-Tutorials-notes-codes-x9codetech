#include<stdio.h>
#include<string.h>
int main()
{
    // concatenation
    // char str1[20] = "Hello ";
    // char str2[20] = "World!";

    // strcat(str1, str2);
    // printf("Concatenated string: %s", str1);

    //comparing
    // char str1[20] = "apple";
    // char str2[20] = "apple";

    // if (strcmp(str1, str2) == 0)
    // {
    //     printf("Strings are equal.");
    // }
    // else{
    //     printf("Strings are not equal.");
    // }

    //copying

    char source[] = "I am X9 coding channel.";
    char destination[20];

    strcpy(destination, source);
    printf("Copied String: %s\n", destination);

    return 0;
}
