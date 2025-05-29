#include<stdio.h>

int gunGCD(int a,int b);

int main()
{
    int num1,num2;

    scanf("%d %d",&num1,&num2);

    int gcd = gunGCD(num1,num2);

    printf("%d",gcd);

}

int gunGCD(int a,int b)
{
    if(b==0)
    {
        return a;
    }
    else
    {
        return gunGCD(b,(a%b));
    }
}