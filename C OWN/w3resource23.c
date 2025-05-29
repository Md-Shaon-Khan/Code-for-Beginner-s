#include<stdio.h>
#include<math.h>
int main()
{

    int x,i,y,p=1,sum=0;

    printf("x - x^3 + x^5 - ........x^n\n\n");

    printf("Enter the x :");
    scanf("%d",&x);

    printf("How many first numbers you want to sum :");
    scanf("%d",&y);


    printf("\n\n%d - %d^3 + %d^5 - ...... ",x,x,x);

    for(i=1;i<=y;i++)
    {
        if(i%2==1)
        {
            sum = sum + pow(x,p);
            p = p + 2;
        }
        else if(i%2==0)
        {
            sum = sum - pow(x,p);
            p = p + 2;
        }



    }

    printf("SUM :%d",sum);



    getch();
}
