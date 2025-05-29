#include<stdio.h>
int main()
{
    int A[10][10],Transpose[10][10],i,j,row,col;

    printf("Enter number of rows and columns for the matrix :");
    scanf("%d %d" , &row , &col);

    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("A[%d][%d] :" , i,j);
            scanf("%d" , &A[i][j]);
        }
        printf("\n");
    }

    printf("\nA =");

    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("\t%d " , A[i][j]);

        }

        printf("\n");
    }

    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            Transpose[j][i] = A[i][j];
        }
    }

     printf("\nTranspose Matrix =");

    for(i=0;i<col;i++)
    {
        for(j=0;j<row;j++)
        {
            printf("\t%d " , Transpose[i][j]);

        }

        printf("\n\t\t");
    }



    getch();
}
