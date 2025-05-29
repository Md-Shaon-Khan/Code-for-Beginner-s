#include<stdio.h>
int main()
{
    int num[100],n;

    printf("How many numbers :");
    scanf("%d" , &n);

    printf("Numbers are :");

    for(int i=0;i<n; i++)
    {
        scanf("%d" , &num[i]);
    }

    int max =num[0];

    for(int i=1; i<n ; i++)
    {
        if(max<num[i])
            max = num[i];

    }



    int min = num[0];
    for(int i=1; i<n ; i++)
    {
        if(min>num[i])
            min = num[i];

    }

    printf("Minimum :%d\n" , min);
    printf("Maximum :%d\n" , max);

    return 0;
}
