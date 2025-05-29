#include<stdio.h>
#include<math.h>
int main()
{
    int n,r;
    scanf("%d",&n);

    int array[n];

    for(int i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }

    for(int i=0;i<n;i++)
    {
        int div=0;

        r = (int)sqrt(array[i]);
        
        for(int j=1;j<=r;j++)
        {
            if(array[i] % j == 0)
            {
                div += 2;
            }
        }
        if(r*r == array[i])
        {
            div -= 1;
        }

        printf("%d\n",div);
        
    }

    return 0;
}