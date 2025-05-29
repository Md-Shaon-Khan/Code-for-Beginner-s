#include<stdio.h>
int main()
{

    int arr[4],i,min,max,minsum=0,maxsum=0;

    for(i=0;i<=4;i++)
    {
        scanf("%d",&arr[i]);
    }

    max = arr[0];

    for(i=0;i<=4;i++)
    {
        maxsum = maxsum + arr[i];
        if(arr[i]>max)
        {
            max = arr[i];
        }
    }

    maxsum = maxsum - max;


    min = arr[0];

    for(i=0;i<=4;i++)
    {
        minsum = minsum + arr[i];
        if(arr[i]<min)
        {
            min = arr[i];
        }
    }

    minsum = minsum - min;

    printf("%d %d",maxsum,minsum);
















    return 0;
}
