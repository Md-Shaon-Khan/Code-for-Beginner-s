#include<stdio.h>
int main()
{
    int a,b,*c,*d,sum;
    scanf("%d %d",&a,&b);

    c = &a;
    d = &b;
    sum = *c + *d;
    printf("%d",sum);




    return 0;
}