#include<stdio.h>
int main()
{

    int N,sum=0;

    printf("Enter the numbers of even digits :");
    scanf("%d" , &N);

    for(int i=1;i<=N*2;i++)
    {
        if(i%2 == 0)
        {

            printf("%d ",i);
            sum += i;

        }

    }

    printf("= %d" , sum);


    getch();
}
