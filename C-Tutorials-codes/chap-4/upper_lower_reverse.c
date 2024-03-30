#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){

    // char str[20] = "X9 Coding";
    //making the string upper case.
    // for (int i = 0; str[i] != '\0'; i++)
    // {
    //     str[i] = toupper(str[i]);
    // }

    // printf("UpperCase string: %s", str);


    //making the string lower case.
    // for (int i = 0; str[i] != '\0'; i++)
    // {
    //     str[i] = tolower(str[i]);
    // }

    // printf("Lowercase string: %s", str);
    
    //reversing the string
    char str[20] = "Hello World";
    int length = strlen(str);

    for (int i = 0; i < length -i -1 ; i++)
    {
        char temp = str[i];
        str[i] = str[length -1 -i];
        str[length -1 -i] = temp;
    }

    printf("Reveresed string is: %s", str);
    
    


    return 0;
}