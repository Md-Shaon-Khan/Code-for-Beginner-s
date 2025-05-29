#include<stdio.h>
int main()
{

    int num1,num2,r1,r2,rem;

    printf("Enter the first number :");
    scanf("%d",&num1);

    printf("Enter the second number :");
    scanf("%d",&num2);

    r1=num1;
    r2=num2;

    while(r2 != 0)
    {
        rem = r1 % r2 ;
        r1 = r2;
        r2 = rem ;
    }

    printf("GCM :%d\n",r1);
    int LCM = (num1*num2) / r1;

    printf("LCM :%d",LCM);







    getch();
}
