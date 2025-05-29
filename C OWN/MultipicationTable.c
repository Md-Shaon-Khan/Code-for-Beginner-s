#include<stdio.h>
int main()
{
    int n,i;

    printf("Enter an integer between 2 and 1000 :");
    scanf("%d" , &n);

    if(n>=2 &&n<=1000)

   {

    for(i=1;i<=10;i++)
    {

        printf("%d * %d   = %d\n",i,n,i*n);



    }

   }

   else
   {
       printf("\n\nPlease enter a number between 2 to 1000!!");
   }






    getch();
}
