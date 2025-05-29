#include<stdio.h>
int main()
{
    int num,temp,x,i,y;

    printf("Enter the number :");
    scanf("%d",&num);

    temp = num;

    while( temp!=0)
    {
        y = temp%10;
        printf("%d",y);
        temp = temp / 10;


    }




}
