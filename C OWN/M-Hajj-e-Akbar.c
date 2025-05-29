#include<stdio.h>
#include<string.h>
int main()
{

    int num=0;
    char s1[]="Hajj";
    char s2[]="Umrah";
    char s[22];
    while(scanf("%s",&s)!='*')
    {
        if(!strcmp(s,"*"))
        {
            break;
        }
        if(0==strcmp(s,s1))
        {
            printf("Case %d: Hajj-e-Akbar\n",++num);
        }
        if(0==strcmp(s,s2))
        {
            printf("Case %d: Hajj-e-Asghar\n",++num);
        }

    }









    return 0;
}
