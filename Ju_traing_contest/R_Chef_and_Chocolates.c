#include<stdio.h>
int main()
{
    int n,a,b,c,sum,res;
    scanf("%d",&n);

    while(n!=0)
    {
        scanf("%d %d %d",&a,&b,&c);

        sum = a*5 + b*10;

        res = sum/c;
        printf("%d\n",res);

        n--;
    }


    return 0;
}