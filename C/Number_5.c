
#include<stdio.h>
void count_down(int N)
{

    if(N == -1)
    {
        return 0;
    }
    else
    {
        printf("%d\t",N);

        return count_down(N-1);
    }
}

int main()
{
    int number ;

    printf("Enter any number(n) to count down n to 0 :");
    scanf("%d",&number);


    printf("Count down form %d to 0 :\n",number);
    count_down(number);







    return 0;
}
