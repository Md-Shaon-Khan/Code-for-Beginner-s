#include<stdio.h>
int main()
{
    int x=0;

    Shaon:
        printf("%d\t" , x);
        x++;

    if(x<=10)
        goto Shaon;


    return 0;
}
