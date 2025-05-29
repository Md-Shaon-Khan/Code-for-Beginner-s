#include<stdio.h>
int main()
{

    int number1,number2,fact,r1,r,i,j,k,sum=0,temp;


    printf("Enter the first number :");
    scanf("%d",&number1);

    printf("Enter the second number :");
    scanf("%d",&number2);

    printf("Strong numbers are :");



    for(k=number1;k<=number2;k++)
    {


       temp=k;

    while(temp != 0)
    {
        r = temp % 10 ;

        fact=1;

        for(i=1;i<=r;i++)
        {
            fact = fact*i;
        }
        sum = sum + fact;

        temp = temp/10;
    }

    if(sum==k)
    {
        printf("%d ",k);

    }

    printf("\n");








    }
















    getch();
}
