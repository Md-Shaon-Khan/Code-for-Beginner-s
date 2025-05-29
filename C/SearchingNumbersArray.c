#include<stdio.h>
int main()
{
    int num[] = {10,3,45,656,756,53};

    int value,pos=-1,i;

    printf("Enter the value you want to search :");
    scanf("%d" , &value);

    for(i=0;i<6;i++)
    {
        if(value==num[i])
        {
            pos = i+1;
            break;
        }
    }

    if(pos==-1)
    {
        printf("Item is not found.");
    }
    else
    {
        printf("The value is found at %d position" , pos);
    }




    return 0;
}
