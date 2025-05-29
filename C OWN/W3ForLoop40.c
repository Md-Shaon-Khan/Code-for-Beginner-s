#include<stdio.h>
int main()
{

    int N;

    printf("Enter the rows number :");
    scanf("%d",&N);

    for(int i=1;i<=N;i++)
    {
        for(int j=N-i;j>=1;j--)
        {
            printf("  ");
        }
        for(int j=1;j<=i;j++)
        {
            printf("%c ",j+64);
        }
        for(int j=i-1;j>=1;j--)
        {
            printf("%c ",j+64);
        }
        printf("\n");
    }















    getch();
}
