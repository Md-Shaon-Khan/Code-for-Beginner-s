#include<stdio.h>

void calculatePower(double base , double exp)
{
  double result=1,i;
  for(i=1; i<=exp ; i++)
  {
      result = result * base ;
  }
      printf("(%.2lf^%.2lf)=%.1lf\n" ,base,exp, result);
}

int main()
{

    double base,exp;

    printf("Enter base :");
    scanf("%lf" , &base);

    printf("Enter Exponent :");
    scanf("%lf" , &exp);

    calculatePower(base , exp);

    getch();
}
