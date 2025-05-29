#include<stdio.h>
int main()
{
    int n,i,arr[100];
    int one=0,two=0,posOne,posTwo;

    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&arr[i]);

        if(arr[i]%2==0)
        {
          one++;
          posOne = i;
        }
        else
        {
            two++;
            posTwo=i;
        }
    }

    if(one>two)
    {
        printf("%d",posTwo);
    }
    else
    {
        printf("%d",posOne);
    }












    return 0;
}
