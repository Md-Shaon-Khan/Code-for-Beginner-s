#include<stdio.h>
int main()
{
    char ch;
    printf("Enter any letter to find is it smaller or capital :");
    scanf("%c", &ch);

    if(ch>='a' && ch<='z')
            printf("Small Letter.");
    else if(ch>='A' && ch<='Z')
        printf("Capital letter.");
    else
        printf("Not a letter.");

    return 0;
}
