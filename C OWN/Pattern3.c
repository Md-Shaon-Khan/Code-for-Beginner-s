#include<stdio.h>
int main()
{

    int N,i,j,num=1;

    printf("Please enter the rows number :");
    scanf("%d" , &N);

    for(i=1;i<=N;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf(" %d " ,num++ );
        }

        printf("\n");
    }






    getch();
}

