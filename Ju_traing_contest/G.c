#include<stdio.h>
int main()
{
    int n,p,pp;
    scanf("%d",&n);

    p  =  n / 5;
    pp = n % 5;

    if(pp != 0)
      printf("%d",p+1);
    else
      printf("%d",p);



    return 0;
}