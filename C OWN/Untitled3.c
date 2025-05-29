#include<stdio.h>
int main()
{

    int bin,temp,r,sum=0,i=1;

    printf("Enter the Binary number :");
    scanf("%d",&bin);

    temp=bin;

    while(temp != 0)
    {

        r = temp % 10;
        sum = sum +r*i;


        temp = temp / 10 ;

        i = 2*i;
    }

    printf("Decimal number :%d",sum);














    getch();
}
