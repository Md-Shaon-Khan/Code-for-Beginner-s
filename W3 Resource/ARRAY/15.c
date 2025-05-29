#include<stdio.h>
int main()
{
    int s , p , pp;
    scanf("%d",&s);

    int array[s];

    for(int i=0;i<s;i++)
    {
        scanf("%d",&array[i]);
    }

    
    scanf("%d",&pp);

    for(int i=pp;i<s-1;i++)
    {
       
       array[i] = array[i+1];
    }
    for(int i=0;i<s-1;i++)
    {
        printf("%d\t",array[i]);
    }




    return 0;
}