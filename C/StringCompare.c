#include<stdio.h>
int main()
{
    char str1[] = "Shaon Khan";
    char str2[] = "Shahrier Nayem";

    int d = strcmp(str1,str2);

    if(d==0)
    {
        printf("Strings are equal.");
    }
    else
    {
        printf("Strings are not equal.");
    }




    getch();
}
