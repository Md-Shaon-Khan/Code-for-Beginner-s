#include<stdio.h>
int main()
{
    double num1, num2;
    char op;

    printf("Enter an operators :");
    scanf("%c" , &op);

    printf("Enter two numbers :");
    scanf("%lf %lf" ,&num1 ,&num2);



    switch(op)
    {
    case '+' :
        {
            printf("%.3lf + %.3lf = %.2lf\n" ,num1 ,num2,num1+num2);
            break;
        }
    case '-' :
        {
            printf("%lf.3 - %.3lf = %.2lf\n" ,num1 ,num2,num1-num2);
            break;
        }
    case '*' :
        {
            printf("%.3lf * %.3lf = %.2lf\n" ,num1 ,num2,num1*num2);
            break;
        }
       case '/' :
        {
            printf("%.3lf / %.3lf = %.2lf\n" ,num1 ,num2,num1/num2);
            break;
        }

    }


    return 0;
}
