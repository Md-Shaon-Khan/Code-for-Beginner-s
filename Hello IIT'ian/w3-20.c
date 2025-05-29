#include<stdio.h>
#include<math.h>

int main()
{

    float a,b,c,x,y,z1,z2;

    printf("Input the first number(a): ");
    scanf("%f",&a);
    printf("Input the second number(b): ");
    scanf("%f",&b);
    printf("Input the third number(c): ");
    scanf("%f",&c);

    x = (b*b) -(4*a*c);

    if(x>0 && a!=0)
    {
    x = sqrt(x);

    z1 = (-b + x)/(2*a);
    z2 = (-b - x)/(2*a);

    printf("Root1=%.3f",z1);
    printf("\nRoot2=%.3f",z2);

    }
    else
    {
        printf("Not possible");
    }


    getch();
}
