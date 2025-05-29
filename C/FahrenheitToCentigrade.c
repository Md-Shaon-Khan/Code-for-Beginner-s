#include<stdio.h>
int main()
{
    float C , F;

    printf("Enter fahrenheit :");
    scanf("%f", &F);

    C =((F-32) / 9)*5;

    printf("Centigrade :.2%f" , C);

    return 0;
}
