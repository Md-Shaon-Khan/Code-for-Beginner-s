#include<stdio.h>
int func1(int x)
{

    int y;
    y = x*x;
    return y;
}
int main()
{

    int a, count;
    for(count =1;count<=5;count++)
    {

        a = func1(count);
        printf("%d  ",a);
    }
}
