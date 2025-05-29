#include<stdio.h>
int main()
{


    int N,X,Y,i,j,sum=0;

    printf("How many times :");
    scanf("%d" , &N);

    for(i=1;i<=N;i++)
    {
        printf("Enter the starting and finishing number :");
        scanf("%d %d" , &X,&Y);
        sum=0;

        if(X==0||Y==0||X<0||Y<0)
        {
           printf("INVALID\nPlease enter any integer number without 0 or less than 0.\n");

        }

        else if(Y>X)
        {
            for(j=X;j<=Y;j++)
            {
                printf("%d ",j);
                sum = sum + j;

            }
            printf("SUM = %d" , sum);
            printf("\n");
        }
        else if(X>Y)
        {
            for(j=Y;j<=X;j++)
            {
                printf("%d ",j);
                sum = sum + j;

            }
            printf("SUM = %d" , sum);
            printf("\n");
        }
    }


  getch();
}
