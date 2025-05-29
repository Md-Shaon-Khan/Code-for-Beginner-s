#include<stdio.h>
int main()
{

    int Start,last,sum=0;

    printf("Enter the first number :");
    scanf("%d" , &Start);
    printf("Enter the last number :");
    scanf("%d" , &last);

    for(int i = Start ; i<=last;i++)
    {
        sum = sum+i;
    }

    printf("Total SUM :");
    for(int i=Start ; i<last;i++)
    {
        printf(" %d +",i);

    }
    printf(" %d = %d",last,sum);




    getch();
}
