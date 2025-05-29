#include<stdio.h>
#include<string.h>
int main()
{

    int t,n,count=0;
    int aa[100000];
    scanf("%d",&t);
    while(t--)
    {
        int d=0,rem=0;
        scanf("%d",&n);
        if(n >= 1000){
            rem=n%1000;
            aa[d++]=n-rem;
            n%=1000;
            ++count;
        }
        if(n >= 100){
            rem=n%100;
            aa[d++]=n-rem;
            n%=100;
            ++count;
        }
        if(n >= 10){
            rem=n%10;
            aa[d++]=n-rem;
            n%=10;
            ++count;
        }
        if(n<10 && n>0){
            aa[d++]=n;
            ++count;
        }

        printf("%d",count);

        for(int i=0;i<4;i++)
        {
            if(aa[i] < 10000)
            {
                printf("%d ",aa[i]);
            }
        }




    }



    return 0;
}
