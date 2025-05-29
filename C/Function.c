#include<stdio.h>

void sum(int a , int b , int c)
{
    printf("The sum is =%d\n" , a+b+c);
}
void sub(int a , int b , int c)
{
    printf("The sum is =%d\n" , a-b-c);
}

int main()
{
    int n;

    printf("How many times you want to calculate sum and sub :");
    scanf("%d" , &n);
    for(int i=0;i<n;i++)
     {

        int a , b , c ;
        printf("Enter three numbers for sum :");
        scanf("%d %d %d" , &a , &b , &c);
        sum(a , b , c) ;

        printf("Enter three numbers for subtraction :");
        scanf("%d %d %d" , &a , &b , &c) ;
        sub(a , b , c) ;

     }

     getch();
}
