#include<stdio.h>
int main()
{
    float X,Y;
    scanf("%f %f",&X,&Y);

    if(X>0 && Y>0)
    {
        printf("Q1");
    }
    else if(X<0 && Y>0)
    {
        printf("Q2");
    }
    else if(X<0 && Y<0)
    {
        printf("Q3");
    }
    else if(X>0 && Y<0)
    {
        printf("Q4");
    }
    else
    {
        printf("Origem");
    }
    
    return 0;
}