#include<stdio.h>
int main()
{
    int NoItem1,NoItem2,WeightItem1,WeightItem2;
    float average;

    printf("Test Data :\n");

    printf("Weight - Item1 :");
    scanf("%d",&WeightItem1);

    printf("No. of item1 :");
    scanf("%d",&NoItem1);

    printf("Weight - Item2 :");
    scanf("%d",&WeightItem2);

    printf("No. of item2 :");
    scanf("%d",&NoItem2);

    int sum = (WeightItem1*NoItem1)+(WeightItem2*NoItem2);
    average =(float)sum/(NoItem1+NoItem2);

    printf("Expected Value : %f",average);









    return 0;
}

