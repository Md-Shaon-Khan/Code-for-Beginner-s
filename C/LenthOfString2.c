#include<stdio.h>
int main()
{
    char s1[] = "I am never can be a good man.";

    int i=0,len=0;

    while(s1[i] != '\0')
    {

        i++;
        len++;

    }

    printf("Length =%d" , len);


    getch();
}
