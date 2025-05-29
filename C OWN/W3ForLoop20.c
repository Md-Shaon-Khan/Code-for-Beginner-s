#include<stdio.h>
int main()
{

    int n,row,col;

    printf("Enter the rows number :");
    scanf("%d" ,&n);

    for(row=1;row<=n;row++)
    {
        for(col=n-row;col>=1;col--)
        {
            printf(" ");
        }
        for(col=1;col<=2*row-1;col++)
        {
            printf("*");
        }
        printf("\n");
    }





    return 0;
}
