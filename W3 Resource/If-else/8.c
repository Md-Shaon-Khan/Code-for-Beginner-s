#include<stdio.h>
int main()
{
    int Number1,Number2,Number3;

    scanf("%d %d %d",&Number1,&Number2,&Number3);

    if(Number1 > Number2 && Number1 > Number3)
    {
        printf("The first number is the greatest among three");
    }
    else if(Number2 > Number3 && Number2 > Number1)
    {
        printf("The second number is the greatest among three");
    }
    else
    {
        printf("The third number is the greatest among three");
    }




    return 0;
}
