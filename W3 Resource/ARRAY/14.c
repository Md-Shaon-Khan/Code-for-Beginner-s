#include<stdio.h>
int main()
{
    int n,insert,p,position;
   
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
    printf("Input the Position ,Where the value to be inserted :");
    scanf("%d",&position);
    
    
    for(int i=n;i>position-1;i--)
    {
        array[i] = array[i-1];
    }
    array[position-1] = insert ;

    printf("After Insert the list is :");
    for(int i=0;i<=n;i++)
    {
        printf("%d\t",array[i]);
    }



    return 0;
}