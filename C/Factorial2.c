#include<stdio.h>
int main()
{
    int n,fact=1,i;

    printf("Enter the n :");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        fact = fact * i;
    }

    printf("Factorial of %d = %d",n,fact);






    return 0;
}
