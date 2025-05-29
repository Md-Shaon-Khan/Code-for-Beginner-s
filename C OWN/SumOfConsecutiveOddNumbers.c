#include<stdio.h>
int main()
{

    int N,X,Y,i,j,sum=0;

    printf("How many times you want to do it :");
    scanf("%d" , &N);


    for(i=1;i<=N;i++)
    {
        scanf("%d %d" , &X , &Y);
        sum = 0;

        if(X==Y)
        {
            printf("SUM = 0");
        }

        else if(X>Y)
        {
            for(j=Y+1;j<=X-1;j++)
            {
                if(j%2==1)
                {
                    sum = sum + j;
                }
            }
        }
        else if(Y>X)
        {
            for(j=X+1;j<=Y-1;j++)
            {
                if(j%2==1)
                {
                    sum = sum + j ;
                }
            }
        }
        printf("SUM = %d\n",sum);
    }










    getch();

}
