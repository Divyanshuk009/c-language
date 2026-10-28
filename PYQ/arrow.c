#include <stdio.h>

// When are structure members accessed using the arrow operator ?
//  The arrow operator(->) is used to access structure members through a pointer to a structure.

int main()
{

    struct Student
    {
        int age;
    };

    struct Student s = {20};
    struct Student *p = &s;

    printf("%d", p->age);
}