#include<stdio.h>
int main()
{
    int n;
    printf("Enter the total students :");
    scanf("%d",&n);
    
    printf("Enter the cgpa :");
    float arr[n];

    for(int i=0;i<n;i++)
    {
        scanf("%f",&arr[i]);
    }
    float temp;

    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j] < arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;

            }
        }
    }
    printf("CGPA = ");
    for(int j=0;j<n;j++)
    {
        printf("%.2f\t",arr[j]);
    }

    printf("\nLowest CGPA : %.2f",arr[n-1]);
    printf("\nHighest cgpa :%.2f",arr[0]);
    
    




    return 0;
}