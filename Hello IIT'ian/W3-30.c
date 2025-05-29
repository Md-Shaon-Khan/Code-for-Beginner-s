#include<stdio.h>
int main()
{

    int i,power;

    for(i=1;i<=4;i++)
    {
        if(i%2==0)
        {
            power = pow(i,2);
            printf("%d^%d=%d\n",i,i,power);
        }
    }








    getch();
}
