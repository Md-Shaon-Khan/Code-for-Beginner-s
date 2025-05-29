#include<stdio.h>
int main()
{
    int number,temp,rem,sum=0;

    printf("Enter the number :");
    scanf("%d",&number);

    temp = number ;

    while(temp!= 0)
    {
        rem = temp % 10 ;
        sum += rem ;
        temp = temp /10 ;
    }

    printf("Sum of digits = %d",sum);



    getchar();
}
