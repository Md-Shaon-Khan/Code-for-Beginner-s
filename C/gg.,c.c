#include<stdio.h>
int main()
{
    int number,number_2,number_3,number_4;
    int a,b;

    printf("Enter an integer number for pre increment :");
    scanf("%d",&number);

    a = ++number;

    printf("After pre increment number = %d\nAnd a = %d",number,a);

    printf("\nEnter an integer number for post increment :");
    scanf("%d",&number_2);

    a = number_2 ++;

    printf("After post increment number = %d\nAnd a =%d",number_2,a);


    printf("\nEnter an integer number for pre decrement :");
    scanf("%d",&number_3);

    b = --number_3;

    printf("After pre decrement number = %d\nAnd b = %d",number_3,b);

    printf("\nEnter an integer number for post decrement :");
    scanf("%d",&number_4);

    b = number_4--;

    printf("After post decrement number = %d\nAnd b =%d",number_4,b);






    return 0;
}
