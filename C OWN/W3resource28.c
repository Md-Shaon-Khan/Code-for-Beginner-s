#include<stdio.h>
int main()
{

    int x,y,i,j,sum=0;

    printf("Enter the first number :");
    scanf("%d",&x);
    printf("Enter the last number :");
    scanf("%d" ,&y);

    for(i=x;i<=y;i++)
    {
        for(j=1;j<i;j++)
        {
            if(i%j==0)
                sum = sum + j;
        }
        if(sum==i)
            printf("%d ",i);

        sum =0;

    }




    getch();
}
