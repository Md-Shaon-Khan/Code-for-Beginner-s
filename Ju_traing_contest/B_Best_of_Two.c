#include<stdio.h>
int main()
{
    int t;

    scanf("%d",&t);

    int n1,n2;

    while(t != 0)
    {
        scanf("%d %d",&n1,&n2);

         (n1>n2) ? printf("%d\n",n1) : printf("%d\n",n2);

        t--;

    }







    return 0;
}