#include<stdio.h>
#include<string.h>

struct Student
{
    char name[50];
    int age;
};


int main(int argc, char const *argv[])
{
    struct Student s;

    struct Student *str = &s;

    strcpy(str->name, "X9CodeTech");
    str->age = 22;

    printf("The student name is: %s\n", str->name);
    printf("The student age is: %d", str->age);
    return 0;
}
