//Read 100 integer numbers.
//Print the highest read value and the input position.

#include<stdio.h>
int main()
{
    int n,i,max,num[100],pos;

    printf("Enter how many numbers you want to compare :");
    scanf("%d" , &n);

    printf("Enter the number :");
    for(i=0;i<n;i++)
    {
        scanf("%d" , &num[i]);
    }

    max = num[0];
    for(i=1;i<n;i++)
    {
        if(num[i]>max)
           {
               max = num[i];
               pos = 1+i;
           }
           else
            pos = 1;

    }

    printf("Maximum number :%d\n" , max);
    printf("Position :%d" , pos);


    getch();
}
