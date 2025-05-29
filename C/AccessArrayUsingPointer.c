#include<stdio.h>
int main()
{
    int a[5] = {10,23,54,67,7};
    int *p,i;

    p = &a[0];

    for(i=0;i<5;i++)
    {
        printf("%d " , *p);

        p++;
    }






    getch();
}
