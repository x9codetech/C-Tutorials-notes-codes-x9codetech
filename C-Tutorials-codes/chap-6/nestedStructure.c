#include<stdio.h>
#include<string.h>

struct Year
{
    int yearOfCompletion;
};


struct Student
{
    char name[50];
    int age;
    struct Year year;
};


int main(int argc, char const *argv[])
{
    struct Student s;

    strcpy(s.name, "Ahmad");
    s.age = 23;
    s.year.yearOfCompletion = 2026;



    printf("The student name is: %s\n", s.name);
    printf("The student age is: %d\n", s.age);
    printf("The student graduation is: %d", s.year.yearOfCompletion);

    return 0;
}
