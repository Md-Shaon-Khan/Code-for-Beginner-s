#include<stdio.h>
int main()
{
    int num[4],pos=0,neg=0,i;

    for(i=1;i<=5;i++)
    {
        printf("Enter the number %d :",i);
        scanf("%d",&num[i-1]);

    }

    for(i=1;i<=5;i++)
    {
        if(num[i-1]>0)
        {
            pos++;
        }
        else if(num[i-1]<0)
        {
            neg++;
        }
    }

    printf("Number of positive number :%d",pos);
    printf("\nNumber of negative number :%d",neg);


   getch();
}
