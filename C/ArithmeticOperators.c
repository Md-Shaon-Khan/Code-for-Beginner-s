//write a program that takes two integer number and display sum

#include<stdio.h>

int main()
{
    int num1 , num2 , sum ;
    int num3 , num4 , sub ;
    int num5 , num6 , mul ;
    int num7 , num8 , div ;
    int num9 , num10 , sos ;

    printf("Enter two integer number for sum  :");
    scanf("%d %d" , &num1 ,&num2);
    sum = num1 + num2 ;

    printf("The sum is :%d\n" , sum );

    printf("Enter two integer number for sub :");
    scanf("%d %d" , &num3 ,&num4);
    sub = num3 - num4 ;

    printf("The sub is :%d\n" , sub );

    printf("Enter two integer number for mul :");
    scanf("%d %d" , &num5 ,&num6);
    mul = num5 * num6 ;

    printf("The mul is :%d\n" , mul );

    printf("Enter two integer number for div :");
    scanf("%d %d" , &num7 ,&num8);
    div = num7 / num8 ;

    printf("The div is :%d\n" , div );





    getch();

}

