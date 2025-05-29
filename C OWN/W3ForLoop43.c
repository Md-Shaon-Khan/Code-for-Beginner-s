#include<stdio.h>
int main()
{

    int num1,num2,r1,r2,rem;

    printf("Enter the number 1 :");
    scanf("%d",&num1);

    printf("Enter the number 2 :");
    scanf("%d",&num2);

    r1=num1;
    r2=num2;

    while( r2 != 0)
    {
        rem = r1 % r2 ;
        r1 = r2;
        r2 = rem;
    }

    printf("LCM :%d",r1);



    getch();
}
