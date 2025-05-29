#include<stdio.h>
int main()
{

    int x,y,i,count=0,j;

   printf("Enter the first number :");
   scanf("%d",&x);

   printf("Enter the last number :");
   scanf("%d",&y);


   for(j=x;j<=y;j++)
   {
       count=0;
         for(i=2;i<j;i++)
     {
         if(j%i==0)
         {
             count++;
             break;
         }


     }

        if(count==0 && j!=1)
     {
         printf("%d " ,j);

     }

   }





    getch();
}
