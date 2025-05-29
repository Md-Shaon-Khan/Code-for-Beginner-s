#include<stdio.h>
int main()
{

    int num[4],pos=0,sum=0,i;

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
            sum +=num[i-1];

        }

    }
    float avg = (float)sum / pos;


    printf("Number of positive number :%d",pos);
    printf("\nAverage value of the said positive number :%.2f",avg);

    getch();
}
