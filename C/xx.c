#include<stdio.h>
int main()
{
     int n,a;
    scanf("%d",&n);
int array[n];

    for(int i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    int min = array[0];
    for(int i=1;i<n;i++)
    {
        if(array[i]<min)
        {
            min = array[i];
        }
    }
    for( int i=0;i<n;i++)
    {
        if(array[i]==min)
        {
            i +=1;
            a=i;
            break;
        }
    }
    printf("%d %d",min,a);




    return 0;
}
