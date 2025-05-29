#include<stdio.h>
int main()
{
   int n,al=0,bb=0;
   int i,a[3],b[3];
   n=3;

   for(i=0;i<3;i++)
   {
       scanf("%d",&a[i]);
   }
   for(i=0;i<3;i++)
   {
       scanf("%d",&b[i]);
   }
   for(i=0;i<=2;i++)
   {
       if(a[i]==b[i])
       {
           al = al+0;
           bb = bb+0;
       }
       else if(a[i]>b[i])
       {
           al = al + 1;
           bb = bb + 0;
       }
       else
       {
           al = al + 0;
           bb = bb + 1;
       }
   }

   printf("%d %d",al,bb);


   return 0;
}
