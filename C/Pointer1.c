#include<stdio.h>
int main()
{

    int w=9;

    int *p;

    p = &w ;




    printf("Value of w = %d\n" , w);
    printf("Value of w = %u\n" , &w);
    printf("Value of p = %u\n" , p);
    printf("Value of p = %u\n" , *p);







    getch();
}
