#include<stdio.h>
int main()
{
    char Ch;

    printf("Enter any Character :");
    scanf("%c",&Ch);

    if(Ch>='a' && Ch<='z' || Ch>='A' && Ch<='Z')
    {
        printf("This is a character.");
    }
    else if(Ch>='0' && Ch<='9')
    {
        printf("This is a digit.");
    }
    else
    {
        printf("This is a special character.");
    }











    getch();
}
