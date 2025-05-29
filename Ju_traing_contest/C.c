#include<stdio.h>
int main()

{
    long long int n;

    scanf("%lld",&n);
    long long int array[n],array2[n],result[n];

    for(long long int i=0;i<n;i++)
    {
        scanf("%lld %lld",&array[i],&array2[i]);
        
    }
    for(long long int i=0;i<n;i++)
    {
        result[i] = array2[i] + array[i];
        
    }
    for(long long int i=0;i<n;i++)
    {
        printf("%lld\n",result[i]);
        
    }
    return 0;



}