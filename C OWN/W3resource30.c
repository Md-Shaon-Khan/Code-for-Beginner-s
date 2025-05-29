#include<stdio.h>
int main()
{

    int num,temp,sum=0,r,start,finish,i;


    printf("For armstrong number.\n");
    printf("Enter the starting number :");
    scanf("%d" , &start);
    printf("Enter the finishing point :");
    scanf("%d",&finish);



    for(i=start;i<=finish;i++)
    {
        temp = i;
        while(temp!=0)
        {
            r = temp % 10;
            sum = sum + r*r*r;
            temp = temp / 10;
        }

        if(sum==i)
        {
            printf("%d  ",sum);
        }
        sum=0;
    }





    getch();
}
