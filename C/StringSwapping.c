#include<stdio.h>
int main()
{
    char str1[30]="Shaon Khan.";
    char str2[30]="Md. Shahrier Nayem.";
    char temp[30];

    strupr(str1);
    strupr(str2);

    printf("%s\n" , str1);
    printf("%s\n" , str2);

    strlwr(str1);
    strlwr(str2);

    strcpy(temp,str1);
    strcpy(str1,str2);
    strcpy(str2,temp);

    printf("%s\n" , str1);
    printf("%s\n" , str2);




    getch();
}
