#include<stdio.h>
int main()
{
    int n,p,x,t,count=0;
    printf("Input the number of elements to be stored in the first array :");
    scanf("%d",&n);
    int array_1[100];

    for(int i=0;i<n;i++)
    {
        printf("Elements - %d :",i);
        scanf("%d",&array_1[i]);
        
    }

    int max,min;
    max = array_1[0];
    min = array_1[0];

    for(int i=1;i<n;i++)
    {
        if(max < array_1[i])
        {
            max = array_1[i];
        }
          
        
        else if(min > array_1[i]){
            min = array_1[i];
        }
          
    }
    printf("The frequency of all elements of an array :\n");
    for(int i=min;i<=max;i++)
    {
        count=0;
        for(int j=0;j<n;j++)
        {
            if(i==array_1[j])
            ++count;
        }
        if(count!=0)
          printf("%d occurs %d times\n",i,count);
    }



    return 0;
}