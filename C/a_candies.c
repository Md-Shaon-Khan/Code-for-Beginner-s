#include<stdio.h>
int main()
{
    int n,a,b,k;
    scanf("%d",&n);
    int array[n];

    for(int i=1;i<=n;i++)
    {
        scanf("%d",&k);
        if(k==1 || k==2)
        {
            array[i-1] = 0;
        }
        else
        {
            if(k%2==0)
            {
                array[i-1] = (k/2)-1;
            }
            else
            {
                array[i-1]=k/2;
            }
        }
    }

    for(int i=0;i<n;i++)
    {
        printf("%d\n",array[i]);
    }


    return 0;
}
