#include<stdio.h>
int main()
{
    int num[4],sum=0;
    printf("Enter 5 numbers :");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&num[i]);
    }
    for(int i=0;i<5;i++)
    {
        if(num[i]%2==0)
        {
            sum++;
        }
    }
    printf("%d numbers are even.",sum);





    return 0;
}
