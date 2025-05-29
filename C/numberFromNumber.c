#include<stdio.h>
int main()
{
    int n,i;

    printf("Enter the last number :");
    scanf("%d" ,&n);

    for(i=-10;i<=n;i=i+1)
    {
        printf(" %d \t" , i);
        printf("\n");
    }

    for(i=-10;i<=n;i=i+2)
    {
        printf(" %d \t" , i);
    }
    printf("\n");
    for(i=-9;i<=n;i=i+2)
    {
        printf(" %d \t" , i);
    }



    return 0;
}
