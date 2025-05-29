#include<stdio.h>
int main()
{
    int n,h,m;
    scanf("%d",&n);
    int sum[n];

    for(int i=1;i<=n;i++)
    {
        scanf("%d %d",&h,&m);
        sum[i-1] = (23-h)*60 + (60-m); 
    }

    for(int i=0;i<n;i++)
    {
        printf("%d\n",sum[i]);
    }




    return 0;
}