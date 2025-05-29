#include<stdio.h>
int main()
{
    int x , y;

    printf("Enter two digit(x^y) :");
    scanf("%d %d" ,&x , &y);

    int Result=pow(x,y);

    printf("Result is :%d", Result);


    return 0;
}
