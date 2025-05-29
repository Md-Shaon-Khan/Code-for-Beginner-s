#include<stdio.h>
int main()
{
    int n, row,col;

    printf("Enter N :");
    scanf("%d" , &n);

    for(row=1;row<=n;row++)
    {
        for(col=1;col<=row;col++)
        {
            printf("%d\t" , col%2);
        }

    printf("\n\n");
    }

    printf("\n\n");

    for(row=1;row<=n;row++)
    {
        for(col=1;col<=row;col++)
        {
            printf("%d\t" , row%2);
        }

    printf("\n\n");
    }


    for(row=1;row<=n;row++)
    {
        for(col=1;col<=row;col++)
        {
            printf("%c\t" , col+64);
        }

    printf("\n\n");
    }


    for(row=1;row<=n;row++)
    {
        for(col=1;col<=row;col++)
        {
            printf("*\t" );
        }

    printf("\n\n");
    }




    return 0;
}
