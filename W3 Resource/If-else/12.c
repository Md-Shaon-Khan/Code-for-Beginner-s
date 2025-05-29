#include<stdio.h>
#include<string.h>

int main()
{
    int roll,marks_physics,marks_chemistry,marks_computer,total,i=0;

    char name[40];
    float percentage;

    printf("Input the Roll Number of the student :");
    scanf("%d",&roll);
   
    printf("Input the Name of the Student :");
    scanf("%s",&name);
   
    printf("Input the marks of Physics, Chemistry and Computer Application :");
    scanf("%d %d %d",&marks_physics,&marks_chemistry,&marks_computer);

   
    printf("Roll name :%d\n",roll);;
    
    printf("Name of student :%s\n",name);
      
    printf("Marks in Physics : %d\n",marks_physics);
       
    printf("Marks in chemistry : %d\n",marks_chemistry);
    
    printf("Marks in Computer Application : %d\n",marks_computer);
    
    total = marks_physics + marks_chemistry + marks_computer;
    percentage = (float)total / 3;
    printf("Total marks = %d\n",total);
    printf("Percentage = %.2f\n",percentage);

    if(percentage >= 80)
    printf("A+");
    else if(percentage >= 70)
    printf("A");
    else if(percentage >= 60)
    printf("A-");
    else if(percentage >= 50)
    printf("B");





    return 0;
}