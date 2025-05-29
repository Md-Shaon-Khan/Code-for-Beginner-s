#include<stdio.h>
int frac(int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
        return n* frac(n-1);
    }
}
int main()
{
    float sumF=0;
    int i=1;
    while (frac(i)<1000)
    {
        

        

        sumF += (float)1/frac(i);
        printf("%f\n",sumF);
        



        i++;
    }
    printf("SUM = %.2f",sumF);
    
    




    return 0;
}