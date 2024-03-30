#include <stdio.h>
#include <string.h>


struct person
{
    char name[50];
    int age;
    float height;
};


int main(int argc, char const *argv[])
{
    struct person person1;

    strcpy(person1.name, "X9CodeTech");
    person1.age = 24;
    person1.height = 170.6;

    printf("The name of person is: %s\n", person1.name);
    printf("The age of person is: %d\n", person1.age);
    printf("The height of person is: %0.2f\n", person1.height);


    return 0;
}





























// struct person
// {
//     char name[30];
//     int age;
//     double height;
// };

// int main(int argc, char const *argv[])
// {
//     struct person person1;

//     strcpy(person1.name, "X9 coding");
//     person1.age = 14;
//     person1.height = 72.6;

//     printf("Name of person: %s\n", person1.name);
//     printf("Age of person: %d\n", person1.age);
//     printf("Height of person: %0.2f\n", person1.height);

//     return 0;
// }












