#include<stdio.h>
int main()
{

    char UPPER;

    printf("Enter any uppercase letter :");
    scanf("%c", &UPPER);

    printf("The uppercase letter of that single character :%c", UPPER+32);

    getch();
}
