#include<stdio.h>

int main()
{
    int x1,v1,x2,v2,h;

    scanf("%d%d%d%d",&x1,&v1,&x2,&v2);
    h=x2-x1;
    if(v1>v2 && h%(v1-v2)==0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

	return 0;
}


