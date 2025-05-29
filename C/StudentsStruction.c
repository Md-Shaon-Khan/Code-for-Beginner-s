#include<stdio.h>

struct Student
{
    char name[50];
    int age;
    float total_marks;
};

int main()
{
    struct Student student[2];
    float totalMarks=0;

    for(int i=0;i<2;i++)
    {
        printf("Student Name :");
        scanf("%s",student[i].name);
        printf("Enter your age :");
        scanf("%d",&student[i].age);
        printf("Total Marks :");
        scanf("%f",&student[i].total_marks);
        totalMarks += student[i].total_marks;
       
    }

    printf("Two students total marks : %.2f",totalMarks);
    printf("\nAverage Marks :%.2f",totalMarks/2);

}
