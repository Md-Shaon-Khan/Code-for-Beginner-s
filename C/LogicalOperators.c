#include<stdio.h>
int main()
{
    char ch;
    int num1 , num2 , num3 ;

    printf("Enter a letter :");
    scanf("%c" , &ch);

    if(ch=='a' || ch=='e' || ch=='i' || ch=='o'  || ch=='u')
        printf("Vowel\n");
    else
        printf("Consonant\n");



    printf("Enter three numbers :");
    scanf("%d %d %d" , &num1 , &num2 , &num3);

    if(num1>num2 && num1>num3)
        printf("Large %d",num1);
    else if(num2>num1 && num2>num3)
        printf("Large %d" ,num2);
    else if(num3>num1 && num3>num2)
        printf("Large %d", num3);
    else
        printf("Numbers are equal");

    return 0;
}
