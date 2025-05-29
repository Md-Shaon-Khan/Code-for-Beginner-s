#include<stdio.h>
int main()
{

   int num,i,result=1;

   printf("Enter the last number :");
   scanf("%d" , &num);

   printf("1 * 2 * 3 *.......* %d=",num);

   for(i=1;i<=num;i=i+1)
   {
       result = result * i;
   }

   printf("%d",result);

   getch();
}
