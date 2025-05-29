#include<stdio.h>
int main()
{
    int number,i,count=0 ;
    printf("Enter any number :");
    scanf("%d",&number);
    for(i=2;i<number;i++)
    {
        if(number%i==0)
         {
            count++;
            break;
         }

   }
   if(count==0)
   {
       printf("Prime number");

   }
   else
    printf("Not a prime number");

 return 0;
}

