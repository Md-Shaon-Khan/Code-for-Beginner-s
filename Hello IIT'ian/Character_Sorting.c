#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void bubble(char *items , int count);
int main(void)
{
    char S[200];

    scanf("%s",&S);

    bubble(S,strlen(S));

    printf("\nAfter sorting the string -\n");
    printf("%s",S);







    return 0;
}