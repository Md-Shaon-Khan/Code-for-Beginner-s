#include<stdio.h>
int main()
{
    int number ;

    printf("Enter the number :");
    scanf("%d",&number );

    printf("Expected Output :\n");

    if(number >= 0 && number%2==0)
    {
        printf("Positive and Even.");
    }
    else if(number>=0 && number%2 != 0)
    {
        printf("Positive and Odd.");
    }
    else if(number<0 && number%2 == 0)
    {
        printf("Negative and Even.");
    }
    else if(number<0 && number%2 != 0)
    {
        printf("Negative and Odd.");
    }









    getch();

}
