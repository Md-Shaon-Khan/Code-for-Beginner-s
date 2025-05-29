#include<stdio.h>
int main()
{
    int n,a,b,sum;
    scanf("%d",&n);

    while(n!=0)
    {
        scanf("%d %d",&a,&b);

        if(a>b)
        {

            printf("%d\n",b);
            
        }
        else
        {
            sum = a + (b-a)*2;

            printf("%d\n",sum);

        }





        n--;
    }




    return 0;
}