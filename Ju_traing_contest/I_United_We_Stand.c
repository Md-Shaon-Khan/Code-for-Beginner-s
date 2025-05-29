#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);

    while(t != 0)
    {
        int n;
        scanf("%d",&n);

        int arr[n],arr2[n],arr3[n];

        for(int i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
        int a2=0,a3=0;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(i!=j && arr[j]%arr[i]!=0)
                {
                   
                    arr3[a3] = arr[i];
                    a3++;
                }
                else
                {
                    arr2[a2] = arr[j];
                    a2++;
                }
            }
        }
        if(a2==0)
        {
            printf("-1\n");
        }
        else
        {
            printf("%d %d\n",a3,a2);
            for(int i=0;i<a3;i++)
            {
                printf("%d ",arr3[i]);
            }
            printf("\n");
            for(int i=0;i<a2;i++)
            {
                printf("%d ",arr2[i]);
            }
            printf("\n");
        }





        t--;
    }
}