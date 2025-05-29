#include<stdio.h>

int perfect_number(int x)
{
    int sum = 0;

    for(int i=1;i<=x/2;i++)
    {
        if(x%i==0)
        {
           sum += i;
        }
    }
    if(sum == x)
      printf("%d  ",sum);
}


int mian()
{
    int number_start,number_last,a;

    printf("Enter the first number : ");
    scanf("%d",&number_start);
    printf("Enter the last number : ");
    scanf("%d",&number_last);

     perfect_number(number_start);



    return 0;
}


