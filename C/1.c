#include<stdio.h>
#define row 3
#define col 3
void inputArray(int arr1[][col],int r ,int c)
{
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",(*(arr1+i)+j));
        }
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d  ",*(*(arr1+i)+j));
        }
        printf("\n");
    }
    
}
int main()
{
    

    int array1[row][col],array2[row][col];

    inputArray(array1,row,col);
}