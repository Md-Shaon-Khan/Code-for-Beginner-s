#include<stdio.h>
int main()
{
    int num;

    printf("Enter an integer number : ");
    scanf("%d" ,&num);
    if(num%2==0)
        printf("Even number.\n");
    if(num%2!=0)
        printf("Odd number.");
    return 0;
}

