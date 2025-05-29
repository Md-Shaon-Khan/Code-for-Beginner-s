#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    float d,x1,x2;

    scanf("%d %d %d",&a,&b,&c);

    d = pow(b,2) - 4 * a * c;
    d = sqrt(d);

    if(d >= 0)
    {
        x1 = (-b + d) / (2*a);
        x2 = (-b - d) / (2*a);

        printf("%f\n",x1);
        printf("%f",x2);
    }
    else
    {
        printf("No Solution");
    }



    return 0;
}