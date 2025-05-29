// 1^2 * 3^2 * 5^2 * 7^2*.......* n^2

#include<stdio.h>
int main()
{
    int i,num,result=1;

    printf("Enter the last odd number :");
    scanf("%d" , &num);

    printf("1^2 * 3^2 * 5^2 * 7^2*.......* %d^2=" , num);

    for(i=1;i<=num;i=i+2)
    {
        result = result * i * i;
    }

    printf(" %d" , result);

    return 0;
}
