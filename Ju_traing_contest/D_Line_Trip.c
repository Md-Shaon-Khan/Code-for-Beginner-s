#include<stdio.h>
int main()
{   
    int t;

    scanf("%d",&t);

    while(t != 0)
    {
        int n,L;
        scanf("%d %d",&n,&L);
        
        int array[n];

        for(int i=0;i<n;i++)
        {
            scanf("%d",&array[i]);
        }
        int max=array[0] ;
        for(int i=1;i<n;i++)
        {
            if(array[i]-array[i-1]>max)
            {
                max = array[i]-array[i-1];
            }
        }
        int a;

        a = L - array[n-1];
        a *= 2;

        if(max > a)
        {
            printf("%d\n",max);
        }
        else
        {
            printf("%d\n",a);
        }

        







        t--;
    }








    return 0;
}