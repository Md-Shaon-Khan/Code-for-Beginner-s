#include<stdio.h>
#include<math.h>
int main()
{
    float A,B,C;
    float U;
    float U1,U2;

    scanf("%f %f %f",&A,&B,&C);

    U = B*B - 4*A*C;

    if(U<0)
    {
        printf("Impossivel calcular.");
    }
    else
    {
        U1 = ((-B + sqrt(U)) /( 2*A) );
        U2 = (-B - sqrt(U)) / (2*A);

        printf("%.5f",U1);
        printf("\n%.5f",U2);


    }
       
        

    


    
    
    return 0;
}