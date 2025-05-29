#include<stdio.h>
int main()
{

    float i,sum=0,n;

    printf("Enter the last number :");
    scanf("%f",&n);

    for(i=1.5;i<=n;i=i+1)
    {
        sum = sum + i;

    }

    printf("Total =%.2f",sum);



    return 0;
}
