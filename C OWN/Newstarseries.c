#include<stdio.h>
int main()
{

    int N;

    printf("Enter rows :");
    scanf("%d" , &N);

    for(int i=1;i<=N;i++)
    {
        for(int j=N-1;j>=i;j--)
        {
            printf(" ");
        }


        for(int j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }



    getch();
}
