#include<stdio.h>
int main()
{

    int first=0,second=1,count=0,fibo,n;

    printf("Enter Range :");
    scanf("%d" , &n);

     for(count=0;count<n;count++)
     {

         if(count<=1)
         {
             fibo = count;
         }

         else
         {
             fibo = first + second;
             first = second;
             second = fibo;
         }

         printf("%d\t" , fibo);

     }





    return 0;
}
