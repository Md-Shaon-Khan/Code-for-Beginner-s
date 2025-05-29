#include<stdio.h>
int main()
{
    int N,x,i;

    printf("Enter how many number you want to see :");
    scanf("%d" , &N);

    printf("Numbers are :");
    for(i=1;i<=N;i++)
    {
       scanf("%d" , &x);

       if(x==0)
       {
           printf("NULL\n");
       }
       else if(x>0 && x%2==0)
       {
           printf("Positive Even Number.\n");
       }
       else if(x>0 && x%2 ==1)
       {
           printf("Positive Odd Number.\n");
       }
       else if(x<0 && x%2==0)
       {
           printf("Negative Even Number.\n");
       }
       else if(x<0 && x%2 ==-1)
       {
           printf("Negative Odd Number.\n");
       }
    }




    getch();
}
