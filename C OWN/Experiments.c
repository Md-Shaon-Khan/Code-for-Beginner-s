#include<stdio.h>
int main()
{
    int N,M,rats,rabbits,frogs,i,sum=0,sum1=0,sum2=0,sum3=0;
    char x[10],b;
    double p,q,r;
    b = '%';
    printf("How many times you did the experiments :");
    scanf("%d" , &N);

    printf("Enter the animals number and name :");
    for(i=1;i<=N;i++)
    {
        scanf("%d %c" , &M , &x);
        if(x=='rats')
        {
            sum = sum + M;

        }
        if(x=='rabbits')
        {
            sum1 = sum1 +M ;
        }
        if(x=='frogs')
        {
            sum2=sum2+M;
        }
    }

    sum3 = sum+sum1+sum2;

    p = (sum/sum3)*100;
    q = (sum1/sum3)*100;
    r = (sum2/sum3)*100;

    printf("Total animals :%d\n",sum3);
    printf("Total rats :%d\n",sum);
    printf("Total rabbits :%d\n",sum1);
    printf("Total frogs :%d\n",sum2);
    printf("Percentage of rats:%.2lf %c\n",p,b);
    printf("Percentage of rabbits:%.2lf %c\n",q,b);
    printf("Percentage of frogs:%.2lf %c\n",r,b);




















    getch();
}
