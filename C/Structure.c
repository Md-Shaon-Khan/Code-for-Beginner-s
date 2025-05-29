#include<stdio.h>

struct person
{
    int age;
    float salary;
};

int main()
{

    struct person person1,person2;

    person1.age =20;
    person1.salary = 31453;

    printf("Age =%d\n" , person1.age);
    printf("Salary =%.2f\n" , person1.salary);




    getch();
}
