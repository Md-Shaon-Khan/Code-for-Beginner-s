#include<stdio.h>
#include<string.h>


struct student
{
    char name[50];
    int age;
    int total_marks;
};

int main()
{
    struct student student_1,student_2;

    printf("Enter the first student name :");
    scanf("%s",student_1.name);
    printf("Enter the age :");
    scanf("%d",&student_1.age);
    printf("Enter the total number of first student :");
    scanf("%d",&student_1.total_marks);
    
    printf("Enter the second student name :");
    scanf("%s",student_2.name);
    printf("Enter the age :");
    scanf("%d",&student_2.age);
    printf("Enter the total number of second student :");
    scanf("%d",&student_2.total_marks);


    printf("First student datails :\n");
    printf("Name : %s",student_1.name);
    printf("\nAge :%d",student_1.age);
    printf("\nTotal marks :%d",student_1.total_marks);

   
    printf("\nSecond student datails :\n");
    printf("Name : %s",student_2.name);
    printf("\nAge :%d",student_2.age);
    printf("\nTotal marks :%d",student_2.total_marks);

   



    return 0;
}
