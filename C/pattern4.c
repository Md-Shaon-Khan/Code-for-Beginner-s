#include<stdio.h>
int main()
{
    int n,row,col;

    printf("Enter N :");
    scanf("%d" , &n);

    for(row=n;row>=1;row--)
    {
        for(col=1;col<=row;col++)
        {
            printf("%d\t" , col);
        }

    printf("\n\n");
    }




    return 0;
}
