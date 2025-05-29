#include<stdio.h>
int main()
{

    int num[5],max,pos=0;

    printf("Enter the numbers :");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&num[i]);
    }

    max=num[0];

    for(int j=0;j<5;j++)
    {
        if(num[j]>max)
        {
            max = num[j];
            pos = pos+j;
        }

    }

    printf("\n Highest value :%d",max);
    printf("\n Position :%d ",pos+1);













    return 0 ;
}
