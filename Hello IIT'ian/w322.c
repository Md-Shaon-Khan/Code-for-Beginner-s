#include<stdio.h>
int main()
{

    int num[4],sum=0;

    printf("Enter the 1st number :");
    scanf("%d",&num[0]);
    printf("Enter the 2nd number :");
    scanf("%d",&num[1]);
     printf("Enter the 3rd number :");
    scanf("%d",&num[2]);
     printf("Enter the 4th number :");
    scanf("%d",&num[3]);
     printf("Enter the 5th number :");
    scanf("%d",&num[4]);

    for(int i=0;i<5;i++)
    {
        if(num[i]%2 != 0)
        {
            sum = sum + num[i];
        }
    }
    printf("sum :%d",sum);










    getch();
}
