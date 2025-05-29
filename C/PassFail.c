#include<stdio.h>
int main()
{
    int marks;

    printf("Enter marks :");
    scanf("%d", &marks);

    if(marks>=33 && marks<=100)
        printf("Pass");
    else
    printf("Fail");



   return 0;
}
