#include<stdio.h>
int main()
{
    int n,a,b,c;
    scanf("%d",&n);

    while(n!=0)
    {
        scanf("%d %d %d",&a,&b,&c);

        if(a!=b && b!=c && c!=a && c<(a+b))
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }




        n--;
    }
}