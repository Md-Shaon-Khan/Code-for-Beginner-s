#include<stdio.h>
int main()
{

    double num;
    int i,sum=0;


   for(i=1;i<=6;i++)
   {
       scanf("%lf",&num);
       if(num>0)
       {
           sum=sum+1;
       }
   }

   printf("%d numbers are positive." , sum);




    getch();
}
