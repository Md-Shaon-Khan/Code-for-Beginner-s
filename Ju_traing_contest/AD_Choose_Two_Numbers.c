#include<stdio.h>
int main()
{
    int n,temp;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int nn;
    scanf("%d",&nn);
    int array[nn];
    for(int i=0;i<nn;i++)
    {
        scanf("%d",&array[i]);
    }
    for(int i=1;i<n;++i)
    {
        for(int j=0;j<n-i;++j)
        {
            if(arr[j]>arr[j+1])
            {
               temp = arr[j];
               arr[j] = arr[j+1];
               arr[j+1] = temp;
            }
        }
    }
    for(int i=1;i<nn;i++)
    {
        for(int j=0;j<nn-i;j++)
        {
            if(array[j]>array[j+1])
            {
               temp = array[j];
               array[j] = array[j+1];
               array[j+1] = temp;
            }
        }
    }

    printf("%d %d",arr[n-1],array[nn-1]);






    return 0;
}