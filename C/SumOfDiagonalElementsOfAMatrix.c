#include<stdio.h>
int main()
{

    int A[15][15],row,col,i,j,sum=0;

    printf("Enter numbers of rows and columns :");
    scanf("%d %d" , &row, &col);

    if(row==col)
    {
        for(i=0;i<row;i++)
        {
            for(j=0;j<col;j++)
            {
                printf("A[%d][%d] :" ,i , j);
                scanf("%d"  , &A[i][j]);
            }
            printf("\n");
        }

        printf("Your entered matrix A : ");
        for(i=0;i<row;i++)
        {
            for(j=0;j<col;j++)
            {
                printf("%d " , A[i][j]);
            }
            printf("\n\t\t\t");
        }

        printf("\nDiagonal elements :");
        for(i=0;i<row;i++)
        {
            for(j=0;j<col;j++)
            {
                if(i==j)
                {
                    printf("%d " , A[i][j]);
                    sum = sum + A[i][j];
                }
            }
        }

        printf("\nSum of diagonal elements = %d" , sum);



    }

    else
    {
        printf("Entered matrix doesn't have equal numbers of rows and columns. ");
    }



    getch();
}
