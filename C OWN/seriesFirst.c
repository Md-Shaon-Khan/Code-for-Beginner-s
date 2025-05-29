#include<stdio.h>
int main()
{

    int N,i,j;

    printf("How many rows and colums you want :");
    scanf("%d" , &N);

    for(i=1;i<=N;i++)
    {
        for(j=1;j<=i;j++)
        {
             printf("%d",j);

        }

        printf("\n");
    }



    getch();
}
