#include<stdio.h>
int main()
{
    int number;

    scanf("%d",&number);

    if(number > 0)
        printf("%d is a positive number",number);

    else
        printf("%d is a negative number",number);



    return 0;
}