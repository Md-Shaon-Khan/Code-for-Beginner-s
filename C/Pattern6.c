#include<stdio.h>
int main()
{
    int n,row,col;

    printf("Enter N :");
    scanf("%d" , &n);

    for(row=1;row<=n;row++)
    {
        for(col=1;col<=row;col++)
        {
            printf("%d\t" , row);
        }

       printf("\n");

    }

    for(row=n-1;row>=1;row--)
    {
        for(col=1;col<=row;col++)
        {
            printf("%d\t" , row);
        }

       printf("\n");

    }

    printf("\n\n");

    for(row=1;row<=n;row++)
    {
        for(col=1;col<=row;col++)
        {
            printf("%c\t" , col+64);
        }

       printf("\n");

    }

    for(row=n-1;row>=1;row--)
    {
        for(col=1;col<=row;col++)
        {
            printf("%c\t" , col+64);
        }

       printf("\n");

    }




    return 0;
}

