#include<stdio.h>
int main()
{
    int X,Y;

    scanf("%d %d",&X,&Y);

    switch (X)
    {
    case 1 : 
       printf("Total : R$ %.2f",Y*4.00);

        break;
    case 2 : 
       printf("Total : R$ %.2f",Y*4.50);

        break;
    case 3 : 
       printf("Total : R$ %.2f",Y*5.00);

        break;
    case 4 : 
       printf("Total : R$ %.2f",Y*2.00);

        break;
    case 5 : 
       printf("Total : R$ %.2f",Y*1.50);

        break;
    
    default:
        printf("Code is not correct");
        break;
    }

    return 0;
    
}