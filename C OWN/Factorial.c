#include<stdio.h>
int main()
{

    int N,fac=1;
    printf("Enter any digit :");
    scanf("%d" , &N);

    for(int i=2;i<=N;i++)
    {

       fac = fac*i;

    }
    printf("The factorial of %d is : %d" , N,fac);






    getch();
}
