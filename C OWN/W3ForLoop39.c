#include<stdio.h>
int main()
{
    int Fnum,Lnum,i,sum=0;

    printf("Enter the first number :");
    scanf("%d",&Fnum);
    printf("Enter the last number :");
    scanf("%d",&Lnum);

    for(i=Fnum;i<=Lnum;i++)
    {
        if(i%9==0)
        {
            printf("%d ",i);
            sum = sum + i;
        }


    }
    printf("\nSum =%d",sum);
















    getch();
}
