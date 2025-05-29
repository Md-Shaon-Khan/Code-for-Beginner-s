#include<stdio.h>
int main()
{

    int x,y,i,sum=0;

    printf("Enter how many numbers you want to calculate :");
    scanf("%d" , &x);

    for(i=1;i<=x;i++)
    {
        printf("%d ",i*i);
        sum = sum + i*i;
    }
    printf("\n\nSUM :%d",sum);













    getch();
}
