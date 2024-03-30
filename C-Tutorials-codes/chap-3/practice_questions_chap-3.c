/*
Q1:
    Write a program to find the factorial value of any number
    entered through the keyboard.

Q2:
    Any year is entered through the keyboard, write a program to
    determine whether the year is leap or not. Use the logical
    operators(- && -)|| -.

Q3:
    Any character is entered through the keyboard, write a
    program to determine whether the character entered is a
    capital letter, a small case letter, a digit or a special symbol.

Q4:
    If the ages of Rambo, Shyam and Ajay are input through the
    keyboard, write a program to determine the youngest of the
    three.

Q5:
    Any integer is input through the keyboard. Write a program to
    find out whether it is an odd number or even number.   
*/

#include<stdio.h>

int main()
{
//Q1:

    // int num, factorial = 1;
    // printf("Enter a positive number for its factorial: ");
    // scanf("%d", &num);

    // if (num < 1)
    // {
    //     printf("You have entered less than 1, please enter positive number");
    // }
    // else
    // {
    //     for (int i = 1; i <= num; ++i)
    //     {
    //         factorial *= i;
    //     }

    //     printf("The factorial of %d is factorial %d", num, factorial);       

    // }



// Q2:
    // int year;

    // printf("Enter a year: ");
    // scanf("%d", &year);

    // if ((year % 4 == 0 && year % 100 != 0)|| year % 400 == 0)
    // {
    //     printf("%d is a leap year.");
    // }
    // else
    // {
    //     printf("%d is not a leap year.");
    // }





// Q3:
    // char ch;
    // printf("Enter a character: ");
    // scanf("%c", &ch);
    
    // if (ch >= 'A' && ch <= 'Z'){
    //     printf("The character is capital letter");
    // }
    // else if (ch >= 'a' && ch <= 'z'){
    //     printf("The character is small case letter");
    // }
    // else if (ch >= '0' && ch <= '9'){
    //     printf("The character is digit");
    // }
    // else{
    //     printf("you have entered a spacial character");
    // }
    


// Q4:
    int Rambo, Shayam, Ajay;

    printf("Enter age of Rambo: ");
    scanf("%d", &Rambo);

    printf("Enter age of Shayam: ");
    scanf("%d", &Shayam);

    printf("Enter age of Ajay: ");
    scanf("%d", &Ajay);

    
    if (Rambo < Shayam && Rambo < Ajay)
    {
        printf("Rambo is younger.");
    }
    else if (Ajay < Shayam && Ajay < Rambo)
    {
        printf("Ajay is younger.");
    }
    else
    {
        printf("Shayam is younger.");
    }
    
    


    return 0;
}
