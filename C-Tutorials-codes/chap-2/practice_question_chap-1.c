#include<stdio.h>

int main(int argc, char const *argv[])
{
    
/*
Q-1:
    s = 1 / 3 * a / 4 - 6 / 2 + 2 / 3 * 6 / g ;
    (a = 4, g = 3, assume s to be an int)
________________________________________________
    int a = 4, g = 3;
    int s = 1 / 3 * a / 4 - 6 / 2 + 2 / 3 * 6 / g ;

    printf("The value of s is: %d", s);
*/




/*
Q-2:
    The expression, a = 30 * 1000 + 2768 ; evaluates to
________________________________________________

    int a = 30 * 1000 + 2768 ;
    printf("the value of a is: %d", a);
*/



/*
Q-3:
    What will be the value of d if d is a float after the operation
    d = 2 / 7.0?
________________________________________________
    float d = 2 / 7.0;
    printf("The value of d is: %f", d);
*/


/*
Q-4:
    The distance between two cities (in km.) is input through the
    keyboard. Write a program to convert and print this distance
    in meters, feet, inches and centimeters.
________________________________________________
    double distance;
    printf("Enter distance in KM");
    scanf("%lf", &distance);

    double meters = distance * 1000;
    double feet = distance * 3280.84;
    double inches = distance * 3970.1;
    double centimeters = distance * 100000;

    printf("Distance in meters: %lf\n", meters);
    printf("Distance in feet: %lf\n", feet);
    printf("Distance in inches: %lf\n", inches);
    printf("Distance in centimeters: %lf\n", centimeters);
*/



/*
Q-5:
    Two numbers are input through the keyboard into two
    locations C and D. Write a program to interchange the
    contents of C and D.
________________________________________________
    int c,d;
    printf("Enter value for C: ");
    scanf("%d", &c);
    printf("Enter value for D: ");
    scanf("%d", &d);

    int x = c;
    c = d;
    d = x;

    printf("After interchange: C is: %d, D: %d", c, d);

*/





/*
Q-6:
    If a five-digit number is input through the keyboard, write a
    program to calculate the sum of its digits.
________________________________________________
    int a, b, c, d, e, sum;
    printf("Enter 5 number and get their sum:\n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);
    scanf("%d", &e);

    sum = a+b+c+d+e;

    printf("The sum of 5 numbers is: %d", sum);
*/

/*
Q-7:
    If the total selling price of 15 items and the total profit earned
    on them is input through the keyboard, write a program to
    find the cost price of one item.
________________________________________________
    float total_selling_price, total_profit;

    printf("Enter the total selling price: ");
    scanf("%f", &total_selling_price);
    printf("Enter the total profit: ");
    scanf("%f", &total_profit);

    int numberOfItems = 15;

    float costPricePerItem = (total_selling_price - total_profit)/ numberOfItems;
    printf("%.2f", costPricePerItem);
*/

/*
Q-8:
    If a five-digit number is input through the keyboard, write a
    program to print a new number by adding one to each of its
    digits. For example if the number that is input is 12391 then
    the output should be displayed as 23402.
*/
    

    return 0;
}