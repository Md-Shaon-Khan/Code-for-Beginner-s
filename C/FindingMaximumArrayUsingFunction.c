#include<stdio.h>

int max(int B[])
{
    int i;
    int max = B[0];

    for(i=1;i<5;i++)
    {
        if(max<B[i])
        {
            max = B[i];
        }
    }

    return max;
}


int main()
{
    int num[] = {22 , 32 , 43 , 54 , 65};

    int max1 = max(num);

    printf("%d " , max1);

    getch();
}
