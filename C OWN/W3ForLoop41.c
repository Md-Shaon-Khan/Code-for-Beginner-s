#include<stdio.h>
int main()
{

    int num,temp,r,Binary=0,i=1;

    printf("Enter any decimal number :");
    scanf("%d",&num);

    temp = num ;

    while (temp != 0)
    {
        r = temp % 2;
        Binary = Binary + (r*i);
        i = 10 * i;
        temp = temp / 2;
    }

    printf("Binary is :%d",Binary);











    getch();
}
