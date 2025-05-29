#include<stdio.h>
int main()
{

    int num1,num2,count=0,sum=0,i;
    printf("The starting number : ");
    scanf("%d" , &num1);
    printf("Enter the last number :");
    scanf("%d" , &num2);

    for( i=num1 ; i<=num2 ; i++)
    {
        if(i % 2 == 1)
        {
            sum = sum + i;
            count++;
        }
    }

    printf("Sum between %d to %d odd number is %d\n" , num1,num2,sum);
    printf("Total odd numbers are %d\n" , count);




    getch();
}
