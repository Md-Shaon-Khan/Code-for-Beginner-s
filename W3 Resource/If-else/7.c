#include<stdio.h>
int main()
{
    int height;
    scanf("%d",&height);

    if(height < 150)
    {
        printf("The person is Dwarf");
    }
    else if( height >= 150 && height < 165)
    {
        printf("The person is Average");
    }
    else if(height >= 165)
    {
        printf("The person is tall.");
    }



    return 0;
}