#include<stdio.h>
int main()
{
    int a,b,d;

    scanf("%d %d %d",&a,&b,&d);
    
    printf("Numbers between %d and %d , divisible by %d\n",a,b,d);
    int sum = 0;
    for(int i=a;i<=b;i++)
    {
        if(i%d==0)
        {
            printf("%d ",i);
            sum += i;
        }
    }
    printf("\nThe sum: %d",sum);










    return 0;
}