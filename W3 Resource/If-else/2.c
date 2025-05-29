#include<stdio.h>
int main()
{ 
    int number;
    scanf("%d",&number);

    if(number % 2 == 0)
       printf("%d is an even integer",number);
    
    else
       printf("%d is an odd number",number);

    return 0;
}