#include<stdio.h>
int main()
{
    int x=0,y=1,temp,n;

    printf("The Fibonacci series upto to ____ terms :");
    scanf("%d",&n);

    printf("%d %d ",x,y);

    for(int i=1;i<=n-2;i++)
    {

        temp = x + y;
        printf("%d ",temp);
        x = y;
        y=temp;

    }











}
