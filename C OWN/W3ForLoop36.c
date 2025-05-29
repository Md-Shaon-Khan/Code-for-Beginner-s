#include<stdio.h>
int main()
{

    int i,j,n;

    printf("How many rows you want :");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {

        for(j=n-i;j>=1;j--)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("%d",j);

        }
        for(j=i-1;j>=1;j--)
        {
            printf("%d",j);
        }

        printf("\n");
    }





    getch();
}
