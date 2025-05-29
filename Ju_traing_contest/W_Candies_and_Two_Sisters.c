#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    long long int num;
    while(n!=0)
    {
        scanf("%lld",&num);

        if(num%2==0)
        {
            printf("%d\n",(num/2)-1);
        }
        else
        {
            printf("%d\n",num/2);
        }




        n--;
    }




    return 0;
}