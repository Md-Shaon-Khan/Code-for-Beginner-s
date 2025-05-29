#include<stdio.h>
#include<math.h>
int main()
{
    int number;
    scanf("%d",&number);

    int lastDigit = number%10;

    int digits = (int)log10(number);
    
    int firstDigits = number / pow(10,digits);
    int extention = number - (firstDigits*pow(10,digits));


    int mainNumber = lastDigit*(pow(10,digits)) + extention + 1 + firstDigits - lastDigit;

    printf("%d",mainNumber);




    return 0;
}