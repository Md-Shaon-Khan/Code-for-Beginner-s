
#include<stdio.h>
int main()
{
    int n,k,l,c,d,p,nl,np;

    scanf("%d %d %d %d %d %d %d %d",&n,&k,&l,&c,&d,&p,&nl,&np);

    int w = (k*l);
    w = w/nl;
    int s = c*d;
    int ee = n / np;

    int arr[3];
    arr[0] = w/n;
    arr[1] = s/n;
    arr[2] = ee/n;

    int min = arr[0];


    for(int i=1;i<3;i++)
    {
        if(min > arr[i])
        {
            min = arr[i];
        }
    }


    printf("%d",min);





    return 0;
}
