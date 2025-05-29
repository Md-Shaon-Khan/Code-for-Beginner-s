#include<stdio.h>

struct person
{
    int age;
    float salary;
};

int main()
{

    struct person person1,person2;

    printf("Enter person 1's age :");
    scanf("%d" , &person1.age);
    printf("Enter person 1's salary :");
    scanf("%f" , &person1.salary);

    printf("Enter person 2's age :");
    scanf("%d" , &person2.age);
    printf("Enter person 1's salary :");
    scanf("%f" , &person2.salary);

    printf("Peraon 1 information :\n");
    printf("Age =%d\n" , person1.age);
    printf("Salary =%.2f\n" , person1.salary);


    printf("Peraon 2 information :\n");
    printf("Age =%d\n" , person2.age);
    printf("Salary =%.2f\n" , person2.salary);




    getch();
}

