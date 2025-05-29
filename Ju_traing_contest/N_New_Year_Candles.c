#include<stdio.h>
int main()
{
    int a,b,sum=0,d,m;

    scanf("%d %d",&a,&b);
    sum += a;
    while(a >= b)
    {
       
        m = a / b;
        d = a % b;
        sum += m;
        a = m + d;
        
    }

    printf("%d",sum);



    return 0;
}