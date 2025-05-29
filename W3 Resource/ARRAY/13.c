#include<stdio.h>
int main()
{
    int n,insert,p;
   
    printf("Input the size of array :");
    scanf("%d",&n);

    int array[n];

    for(int i=0;i<n;i++)
    {
        printf("Element - [%d] :",i+1);
        scanf("%d",&array[i]);
    }

    printf("Input the value to be inserted :");
    scanf("%d",&insert);
    
    for(int i=0;i<n;i++)
    {
        if(insert < array[i])
        {
            p = i;
            break;
        }
    }
    for(int i=n;i>=n-1;i--)
    {
        array[i] = array[i-1];
    }
    array[p] = insert ;

    printf("After Insert the list is :");
    for(int i=0;i<=n;i++)
    {
        printf("%d\t",array[i]);
    }



    return 0;
}