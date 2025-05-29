#include<stdio.h>
int main()
{

    int X,Y;

    while(1)
    {

        printf("Enter the point(x,y) :");
        scanf("%d %d", &X,&Y);

        if(X==0||Y==0)
            break;
        else if(X>0 && Y>0)
            printf("First Coordinates.\n");
        else if(X<0 && Y>0)
            printf("Second Coordinates.\n");
        else if(X<0 && Y<0)
            printf("Trird Coordinates.\n");
        else if(X>0 && Y<0)
            printf("Fourth Coordinates.\n");




    }




    getch();
}
