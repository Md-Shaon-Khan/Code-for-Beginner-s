#include<stdio.h>
int main()
{
    int n;
    printf("Enter the numbers of row :");
    scanf("%d" , &n);


    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i==1||i==n||i==j||j==n-i+19||j==1||j==n)
            {
                printf(" *");
            }
            else
                printf("  ");
        }
        printf("\n");
    }













    getch();
}
