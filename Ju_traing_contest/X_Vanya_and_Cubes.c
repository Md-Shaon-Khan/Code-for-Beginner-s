#include<stdio.h>
int main()
{
    int n,a=1,sum=0;

    scanf("%d",&n);

    int count=0;

    while(n <! 0 || n!= 0)
    {
        for(int i=1;i<=a;i++)
        {
            sum += i;
        }
        if(n-sum >= 0)
        {
            ++count;
            
        }
        else
        {
            break;
        }
        n = n - sum;
        sum=0;
        a++;
        

    }

    printf("%d",count);


    return 0;
}