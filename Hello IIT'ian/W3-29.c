#include<stdio.h>
int main()
{


    int num[4],sum=0,i;

    for(i=1;i<=5;i++)
    {
        printf("Enter the number %d :",i);
        scanf("%d",&num[i-1]);

    }

    for(i=1;i<=5;i++)
    {
        if(num[i-1]%2 != 0)
        {

            sum +=num[i-1];

        }

    }


    printf("\nsum of odd values :%d",sum);


    getch();
}
