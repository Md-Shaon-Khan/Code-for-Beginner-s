#include<stdio.h>
long long fact(int n);
int main()
{
    int N;
    scanf("%d",&N);

    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N-i;j++)
        {
            printf(" ");
        }
        for(int k=0;k<=i;k++)
        {
            int term = fact(i) / (fact(k) * fact(i-k));
            printf("%d ",term);
        }
        printf("\n");
    }




    return 0;
}
long long fact(int n)
{
    long long factorial = 1ll;
    while(n>=1)
    {
        factorial *= n;
        n--;
    }

    return factorial;
}


/*#include <stdio.h>


long long fact(int n);

int main()
{
    int n, k, num, i;
    long long term;

   
    printf("Enter number of rows : ");
    scanf("%d", &num);

    for(n=0; n<num; n++)
    {
       
        for(i=n; i<=num; i++)
            printf("  ");

        
        for(k=0; k<=n; k++)
        {
            term = fact(n) / (fact(k) * fact(n-k));

            printf("%3lld ", term);
        }

        printf("\n");
    }

    return 0;
}


long long fact(int n)
{
    long long factorial = 1ll;
    while(n>=1)
    {
        factorial *= n;
        n--;
    }

    return factorial;
}*/