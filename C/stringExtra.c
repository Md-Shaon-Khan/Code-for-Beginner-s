/*#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    int i, j;

        char *str[10];
        for(i=0; i<10; i++)
        {
            //gets(str[i]);
            scanf("%s",&str[i]);
            if(str[i]=="man") break;
        }


        for(j=0; j<10; j++)
        {
            printf("%s\n",str[j]);
        }

    return 0;
}*/
#include<stdio.h>
#include<string.h>
int main()
{
    long int n,n1;
    scanf("%ld",&n);

    char str[1000000];

    for(int i=0;i<n;i++)
    {
        scanf("%s",&str[i]);
    }
    for(int i=0;i<n;i++)
    {
        printf("%s\n",str[i]);
    }


    return 0;
}
