#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);

    while(t != 0)
    {
        int n;
        scanf("%d",&n);

        int array[n];

        for(int i=0;i<n;i++)
        {
            scanf("%d",&array[i]);
        }
        int temp;
        for(int i=1;i<n-1;i++)
        {
            if(array[i]>array[i-1] && array[i]>array[i+1])
            {
                temp = array[i];
                array[i] = array[i+1];
                array[i+1] = temp;
            }

        }
        
        int count=0;
        for(int i=0;i<n-1;i++)
        {
            if(array[0]!=1 && (array[i+1]-array[i])!=1 )
            {
               ++count;
               printf("NO\n");
               break;
            }
        }
        if(count==0 )
        {
            printf("YES\n");
        }







        t--;
    }






    return 0;
}