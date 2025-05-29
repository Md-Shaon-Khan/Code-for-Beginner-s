#include<stdio.h>

int ppw(int a , int b)
{
    if(b==0)
    return 1;
    
    else
    return a * ppw(a,b-1);
}


int  main()
{
    int a,b;

    scanf("%d %d",&a,&b);

    int aa = ppw(a,b);

    printf("%d",aa);





    return 0;
}