#include<stdio.h>
int main()
{

    int X,Y,N;
    float div;

    printf("How many times you want to divide :");
    scanf("%d",&N);

    for(int i=1;i<=N;i++)
    {
        printf("Enter the numbers :");
        scanf("%d %d",&X,&Y);

        if(Y != 0)
        {


        div = (float)X / Y;
        printf("Div :%.2f" , div);

        printf("\n");

        }

        else if(Y == 0)
        {
            printf("divisao impossivel.\n");
        }
    }











}
