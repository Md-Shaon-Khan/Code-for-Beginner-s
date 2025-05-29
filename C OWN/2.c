#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of row and colum (Same size) :");
    scanf("%d",&n);
    int sum = 0;

    int arr[n][n];

    printf("Enter the elements : \n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
            {
              sum += arr[i][j];  
            }
        }
    }

    printf("\nSum = %d",sum);




    return 0;
}