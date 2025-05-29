#include<stdio.h>
int sumDig(int num)
{
    if(num==0)
    {
        return 0;
    }
    else
    {
        return (num%10) + sumDig(num/10);
    }
}
int main()
{
    int num;
    scanf("%d",&num);

    int sum = sumDig(num);

    printf("%d",sum);

    return 0;
}