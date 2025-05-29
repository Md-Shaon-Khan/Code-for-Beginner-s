#include<stdio.h>
int main()
{
    int a , b , c ,maj;

    printf("Enter three integer number :");
    scanf("%d %d %d" , &a, &b , &c);



    if(a>b && a>c)
    printf("Major number :%d" , a);

    else if(b>c && b>c)
    printf("Major number :%d" , b);

    else
    printf("Major number :%d" , c);








    getch();
}
