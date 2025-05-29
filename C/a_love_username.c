#include<stdio.h>
int mian()
{
    int n,max,min,count=0,i,cc=0;

    scanf("%d",&n);
    int number[n];

    for(i=0;i<n;i++)
    {
        scanf("%d",&number[i]);
    }
    max = number[0];
    min = number[0];
    for(i=1;i<n;i++)
    {
       if(max < number[i])
       {
        ++count;
        max = number[i];

       }
       if(number[i]<min)
       {
        min = number[i];
        cc=1;
       }
    }
    printf("%d",count+cc);



    return 0;
}
