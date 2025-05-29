#include<stdio.h>
int main()
{

    int p,q,r,s;

    printf("Enter the value of p :");
    scanf("%d",&p);
    printf("Enter the value of q :");
    scanf("%d",&q);
    printf("Enter the value of r :");
    scanf("%d",&r);
    printf("Enter the value of s :");
    scanf("%d",&s);

    if(r>0 && q>0 && s>0 && (p%2==0) && q>r && s>p && ((r+s)>(p+q)))
    {
        printf("Correct values.");
    }
    else
    {
        printf("Wrong values.");
    }













    getch();
}
