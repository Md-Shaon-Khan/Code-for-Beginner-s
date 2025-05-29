#include<stdio.h>
int main()
{
    int number=5679,temp,sum=0,rem;

    while(number != 0)
    {
        rem = number % 10;
        sum = sum*10 + rem;
        number = number/10;
        
    }

    printf("%d",sum);




   
}