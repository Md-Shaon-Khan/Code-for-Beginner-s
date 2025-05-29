#include<stdio.h>
int main()
{

    double x,m=0,sum=0;

    for(int i=1;i<=4;i++)
    {

        printf("Enter the number :");
        scanf("%lf",&x);

        if(x<0 || x>10)
        {
            printf("nota invalida.\n");

        }
        else if(x>=0 && x<= 10)
        {
            sum=sum+x;
            m++;
        }



    }

     double avg = sum / m ;

     printf("media =%.2lf\n",avg);









    getch();
}
