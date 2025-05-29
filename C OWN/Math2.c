#include<stdio.h>
int main()
{
    double a1,b1,c1,a2,b2,c2,x,y;

    printf("We gonna calculate two equation like \na1X + b1Y = c1 \na2X + b2Y = c2 ");

    printf("\n\nNow enter a1 :");
    scanf("%lf" , &a1);

    printf("Enter b1 :");
    scanf("%lf" , &b1);

    printf("Enter c1 :");
    scanf("%lf" , &c1);

    printf("Enter a2 :");
    scanf("%lf" , &a2);

    printf("Enter b2 :");
    scanf("%lf" , &b2);

    printf("Enter c2 :");
    scanf("%lf" , &c2);

    double d = a1*b2 - a2*b1;

    if(d==0)
    {
        printf("Value of x and y can no be determined.\n");
    }

    else
   {

    x = ((b2*c1 - b1*c2) / d);
    y = ((a1*c2 - a2*c1) / d);

   }

    printf("X = %.2lf\n" , x);
    printf("Y = %.2lf\n" , y);



    getch();
}
