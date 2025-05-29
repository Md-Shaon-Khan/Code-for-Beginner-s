#include<stdio.h>
int main()
{
    int n,p,x,t;
    printf("Input the number of elements to be stored in the first array :");
    scanf("%d",&n);
    int array_1[100];

    for(int i=0;i<n;i++)
    {
        printf("Elements - %d :",i);
        scanf("%d",&array_1[i]);
        
    }
    printf("\nInput the number of elements to be stored in the second array :");
    scanf("%d",&p);

    int array_2[p];
    for(int i=0;i<p;i++)
    {
        printf("Elements - %d :",i);
        scanf("%d",&array_2[i]);
        
    } 
    x = n+p;
    int array[x];
    for(int i=n,j=0;i<x,j<p;i++,j++)
    {
       array_1[i] = array_2[j];
    }
    for(int i=0;i<x;i++)
    {
        printf("%d\t",array_1[i]);
    }
    printf("\n");

    for(int i=0;i<x-1;i++)
    {
        for(int j=i+1;j<x;j++)
        {
            if(array_1[j]>array_1[i])
            {
                t = array_1[j];
                array_1[j] = array_1[i];
                array_1[i] = t;
              
            }
        }
    }
    printf("The merged array in decending order is :");
    for(int i=0;i<x;i++)
    {
        printf("%d\t",array_1[i]);
    }

    return 0;
}