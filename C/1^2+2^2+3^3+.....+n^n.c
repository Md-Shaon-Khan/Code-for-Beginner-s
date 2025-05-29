#include<stdio.h>
int main()
{
    int N,Sum=0,i;

    printf("Enter the last number :");
    scanf("%d",&N);

    printf("1^2 + 2^2 + 3^2 + ......+%d^2\n",N);
    for(i=1;i<=N;i++)
    {
        Sum =Sum + i*i;
    }

    printf("Sum =%d" , Sum);

    return 0;
}
