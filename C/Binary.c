#include<stdio.h>
int binary(int num)
{
    int temp,sum=0,f=1;

    while(num != 0)
    {
        int rem = num % 2;
        sum = sum + rem * f;
        f = f * 10;
        num = num / 2;


    }
    return sum;

}
int main()
{
    int number;
    scanf("%d",&number);

    int num = binary(number);

    printf("%d",num);
}