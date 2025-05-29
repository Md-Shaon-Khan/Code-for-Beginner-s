#include<stdio.h>
union shaon
{
    int x,y;
};
int main()
{


    union shaon s1;
    s1.x = 1083;
    printf("X = %d\n" , s1.x);
    printf("Y = %d\n" , s1.y);



    getch();
}

