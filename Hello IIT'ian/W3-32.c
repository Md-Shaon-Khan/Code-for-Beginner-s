#include<stdio.h>
int main()
{

    int num;

    printf("Enter any number :");
    scanf("%d",&num);

    for(int i=1;i<=100;i++)
    {
        if(i%num == 3)
        {
            printf("%d\n",i);
        }
    }












    getch();
}
