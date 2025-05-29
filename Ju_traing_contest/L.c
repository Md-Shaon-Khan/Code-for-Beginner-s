#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);

    for(int i=1; b*i<=a;i++)
    {
        a++;
    }
    printf("%d",a);



    return 0;
}