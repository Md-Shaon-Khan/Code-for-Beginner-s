#include<stdio.h>
int main()
{

    int i,x,sum=0;

    printf("Enter any number :");
    scanf("%d" , &x);

    for(i=1;i<=x-1;i++)
    {
        if(x%i==0)
        {
            printf("%d " , i);
            sum = sum + i;
        }




    }

    printf("\n\nSUM :%d" , sum);



    getch();
}
