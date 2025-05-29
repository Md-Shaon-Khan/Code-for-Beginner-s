#include<stdio.h>
int sumArray(int array[],int start,int last)
{
    if(start>=last)
    {
        return 0;
    }
    else
    {
        return (array[start] + sumArray(array,start+1,last));
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int array[n];

    for(int i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    int sum = sumArray(array,0,n);

    printf("%d",sum);

}