#include<string.h>
#include<stdio.h>
#include<stdlib.h>

void bubble(char *items, int count)
{
    register int a,b,c;
    int exchange;
    char t;
    for(a=0;a<count-1;a++)
    {

        for(b=a+1;b<count;b++)
        {
            if(items[b]<items[a])
            {
                t = items[b];
                items[b] = items[a];
                items[a] = t;
            }

        }
    }

}

int main(void)
{
    char s[255];
    printf("Enter a string : ");
    gets(s);
    bubble(s,strlen(s));
    printf("The sorted string is :%s .\n",s);

    return 0;

}
