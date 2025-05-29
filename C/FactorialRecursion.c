#include<stdio.h>

int factorial(int n);

int main()
{
    int n;
    scanf("%d",&n);

    int fac = factorial(n);

    printf("%d",fac);

}
int factorial(int n)
{
    if(n==0)
      return 1;
    
    else
      return n*factorial(n-1);   


}