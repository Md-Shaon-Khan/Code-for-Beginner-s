#include<stdio.h>
int main()
{

    int num,temp,r,sum=0;

    printf("Enter the number :");
    scanf("%d",&num);

    temp = num;

    while(temp!=0)
    {
        r = temp % 10;
        sum = sum + (r*r*r);
        temp = temp /10;

    }

    if(sum==num)
    {
        printf("It is an armstrong number.");
    }
    else
    {
        printf("It is not an armstrong number.");
    }






  return 0;

}
