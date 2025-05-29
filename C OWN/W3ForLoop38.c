#include<stdio.h>
int main()
{
    int num,temp,y,revNum=0;

    printf("Enter the number :");
    scanf("%d",&num);

   temp = num ;

    while(temp != 0)
    {
        y = temp % 10 ;
        revNum = revNum * 10 + y ;
        temp = temp / 10 ;
    }

    if(revNum == num)
    {
        printf("%d is a palindrome number.",revNum);
    }
    else if(revNum != num)
        printf("%d is not a palindrome number.",revNum);





    getch();
}
