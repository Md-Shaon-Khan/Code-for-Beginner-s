#include<stdio.h>
int main()
{
    int a,b,count=0;
    scanf("%d %d",&a,&b);

    while(a >! b)
    {
        a *= 3;
        b *= 2;
        
        ++count;
        if((a>b)) 
        {
            printf("%d",count);
            break;
        }

    }
  



    return 0;
}