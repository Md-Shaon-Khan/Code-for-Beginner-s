#include<stdio.h>
int main()
{
    int Startingnum,Finishingnum,temp,r,sum=0,i;

    printf("Enter a initial number :");
    scanf("%d" , &Startingnum);

    printf("Enter a final number :");
    scanf("%d" , &Finishingnum);

    for(i=Startingnum;i<=Finishingnum;i++)

  {

    temp = i ;

    while( temp!= 0 )
    {
        r = temp % 10;
        sum = sum + r*r*r;
        temp = temp / 10;

    }

    if(sum==i)
        printf("%d\n" , i);
    sum=0;
  }

    return 0;

}
