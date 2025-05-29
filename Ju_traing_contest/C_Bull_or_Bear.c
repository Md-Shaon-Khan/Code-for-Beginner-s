#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);

    int X,Y;

    while(t != 0)
    {
        scanf("%d %d",&X,&Y);

        if(X==Y)
        {
            printf("NEUTRAL\n");
        }
        else
        {
            (X>Y) ? printf("LOSS\n") : printf("PROFIT\n");
        }





        t--;
    }






    return 0;
}