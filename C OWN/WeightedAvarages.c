/*Read an integer N, which represents the number of following test cases.
Each test case consists of three floating-point numbers,
each one with one digit after the decimal point.
Print the weighted average for each of these sets of three numbers,
considering that the first number has weight 2,
the second number has weight 3 and the third number has weight 5.*/

#include<stdio.h>
int main()
{
    int n,i;
    float num1,num2,num3,avg;

    printf("How many times you want to calculate :");
    scanf("%d" , &n);
    for(i=1;i<=n;i++)
    {
       printf("Enter three float numbers :");
       scanf("%f %f %f" , &num1,&num2,&num3);
       avg = (num1*2 + num2*3 + num3*5) / 10 ;
       printf("Avarage :%.1f\n" , avg);


    }









    getch();
}
