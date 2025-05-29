
#include<stdio.h>
int main()
{
    int a=32;
    int b=12;
    int c;

    c = a & b;
    printf("a&b =%d\n",c);

    c = a | b;  //Bitwise or(|)
    printf("a|b =%d\n",c);

    c = a ^ b;//Bitwise EX-OR(^)
    printf("a^b=%d",c);


    return 0;
}
