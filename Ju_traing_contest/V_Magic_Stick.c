#include<stdio.h>
int main()
{
    int n,a,b;
    scanf("%d",&n);

    while(n!=0)
    {
        scanf("%d %d",&a,&b);

        if(a==1 && b>1)
           printf("NO\n");
        else if(a <= 3 && b > 3)
           printf("NO\n");
        else
           printf("YES\n");




        n--;
    }




    return 0;
}