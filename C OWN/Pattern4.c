#include<stdio.h>
int main()
{
    int N,i,j,num=1;

    printf("Enter the rows :");
    scanf("%d" , &N);

    for(i=1;i<=N;i++)
    {
        for(j=N-1;j>=i;j--)
        {
            printf(" ");

        }

        for(j=1;j<=i;j++)
            {
                printf(" %d" , num++);
            }
            printf("\n");
    }








    getch();
}
