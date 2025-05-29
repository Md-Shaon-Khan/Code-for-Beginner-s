#include<stdio.h>
int main()
{
    int Shaon[6],sum=0;

    printf("Enter six numbers :");

    for(int i=0;i<=5;i++)
    {
        scanf("%d" , &Shaon[i]);
    }

    for(int i=0;i<=5;i++)
    {
        sum=sum+Shaon[i];
    }
    printf("Sum :%d\n" , sum);

    printf("Avarage :%.2f\n" , (float)sum/6);

    return 0;
}
