#include<stdio.h>
int main()
{
    int n,sum1=0,sum2=0,sum3=0;
    scanf("%d",&n);

    int a[n],b[n],c[n];

    for(int i=0;i<n;i++)
    {
        scanf("%d %d %d",&a[i],&b[i],&c[i]);
        sum1 += a[i] ;
        sum2 += b[i] ;
        sum3 += c[i] ;

    }
   

    if(sum1==0 && sum2==0 && sum3==0)
       printf("YES") ;
    else
       printf("NO");
    


    return 0;
}