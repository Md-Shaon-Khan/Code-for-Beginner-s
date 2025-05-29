#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,y=0;
   scanf("%d",&n);
   int nm = n;
    int sum;
   while(n!=0)
   {

      int number;
      scanf("%d",&number);
      int array[number];
      for(int i=0;i<number;i++)
      {
        scanf("%d",&array[i]);
      } 

      std :: sort(array,array+number);

      int max = array[number-1];
      int max2;
      for(int i=number-2;i>=0;i--)
      {
        if(array[i]!=max)
        {
            max2 = array[i];
            break;
        }
      }

      sum = max + max2;
      printf("%d\n",sum);
      n--;


   }

   
   return 0;

}