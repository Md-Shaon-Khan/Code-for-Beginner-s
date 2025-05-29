#include<stdio.h>
int main()
{
    int n,temp,sum=0,count=0;
    scanf("%d",&n);
    int arr[n];

    int m;
    scanf("%d",&m);

    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for(int i=n-1;i>=0;i--)
    {
        sum += arr[i];
        ++count;
        if(sum >= m)
        {
            printf("%d",count);
            break;

        }
        
    }






    return 0;
}