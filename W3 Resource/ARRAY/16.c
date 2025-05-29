#include<stdio.h>
int main()
{
    int n,max_2;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int max = a[0];
    max_2 = a[0];
    for(int i=1;i<n;i++)
    {
        if(max < a[i])
         max = a[i];

    }
    for(int i=0;i<n;i++)
    {
        if(a[i] == max)
         i++;

        else if(max_2 < a[i])
        {
           max_2 = a[i];
        }
    }

    printf("%d",max_2);


    return 0;
}