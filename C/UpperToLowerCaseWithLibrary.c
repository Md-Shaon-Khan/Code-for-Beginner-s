#include<stdio.h>
int main()
{
    char upper, lower;

    printf("Enter any uppercase letter :");
    scanf("%c" , &upper);

    lower = tolower(upper);

    printf("Lower letter of that upper letter : %c " , lower);



    return 0;
}
