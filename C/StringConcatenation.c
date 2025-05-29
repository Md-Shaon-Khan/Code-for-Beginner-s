#include<stdio.h>
int main()
{
    char str1[] = "My name is :";
    char str2[] = "Shaon Khan";

    strcat(str1,str2);

    printf("String 1 =\n%s" , str1);

    printf("\nString 2 =\n%s" , str2);



    getch();
}
