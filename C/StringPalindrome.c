#include<stdio.h>
int main()
{

    char str1[30] = "MADAM" ;
    char str2[30] ;

    int i=0,len=0,j;

    len = strlen(str1);

    for(j=0,i=len-1;i>=0;i--,j++)
    {
        str2[j] = str1[i];
    }

    printf("%s\n" , str1);
    printf("%s\n" , str2);

    int d = strcmp(str1,str2);
    if(d==0)
    {
        printf("Strings Are Palindrome.");
    }
    if(d!=0)
    {
        printf("Strings Are Not Palindrome.");
    }




    getch();
}
