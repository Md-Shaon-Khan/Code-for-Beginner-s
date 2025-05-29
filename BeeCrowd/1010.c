#include<stdio.h>
int main()
{
    int product_number_1,number_of_units_1,product_number_2,number_of_units_2;

    float product_cost_1,product_cost_2,pagar;

    scanf("%d %d %f",&product_number_1,&number_of_units_1,&product_cost_1);
    scanf("%d %d %f",&product_number_2,&number_of_units_2,&product_cost_2);

    pagar = (number_of_units_1*product_cost_1 + number_of_units_2*product_cost_2);

    printf("VALOR A PAGAR: R$ %.2f",pagar);

    return 0;

}