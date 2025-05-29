#include<stdio.h>
int main()
{
    int num1,num2,n1,n2,rem;

    printf("Enter two numbers :");
    scanf("%d %d",&num1,&num2);

    n1=num1;
    n2=num2;

    while(n2!=0)
    {
        rem = n1 % n2;
        n1 = n2;
        n2 = rem;
    }

    int GCD,LCM;

    GCD = n1;
    LCM = (num1*num2)/GCD;

    printf("GCD = %d",GCD);
    printf("\nLCM = %d",LCM);




    return 0;
}
