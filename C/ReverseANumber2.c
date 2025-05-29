#include<stdio.h>
int main()
{
    int number,rem,temp,sum=0;

    printf("Enter the number :");
    scanf("%d",&number);

    temp = number ;

    while(temp != 0)
    {
        rem = temp % 10 ;
        sum = sum * 10 + rem ;
        temp = temp / 10 ;
    }

    printf("Reverse number is = %d",sum) ;





   getchar();
}
