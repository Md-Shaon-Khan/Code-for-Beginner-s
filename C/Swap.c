#include<stdio.h>
int main()
{

    int num1=10, num2=5;
    int temp;

    temp = num1;
    num1= num2;
    num2=temp;

    printf("Nuumber 1 is :%d\n",num1);
    printf("Nuumber 2 is :%d",num2);



    return 0;
}
