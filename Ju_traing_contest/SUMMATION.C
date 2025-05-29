#include<stdio.h>
#include<math.h>
int main()
{
    long long int n,aa=0,a;
    scanf("%lld",&n);

    for(long long int i=1;i<=n;i++)
    {
       scanf("%lld",&a);
       aa += a;
    }
    aa = abs(aa);

    printf("%lld",aa);


    return 0;
}