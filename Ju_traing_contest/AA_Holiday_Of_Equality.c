#include<stdio.h>
int main()
{
    int n,sum=0;
    scanf("%d",&n);

    int arr[n];

    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
    for(int i=1;i<n;i++)
    {
        if(max < arr[i])
        {
            max = arr[i];
        }
    }

    for(int i=0;i<n;i++)
    {
        if(arr[i] < max)
        {
            sum = sum + (max-arr[i]);
        }
    }

    printf("%d",sum);




    return 0;
}