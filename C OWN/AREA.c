#include<stdio.h>
int main()
{

    double a,b,c;
    double tri,cir,trap,quad,retan;


    scanf("%lf %lf %lf" , &a ,&b,&c);

    tri = (a*c) / 2 ;
    cir = 3.14159 * c * c;
    trap = ((a+b)/2) * c ;
    quad = b * b ;
    retan = a * b ;

    printf("TRIANGULO:%.3lf\n" , tri);
    printf("CIRCULO:%.3lf\n" , cir);
    printf("TRAPEZIO:%.3lf\n" , trap);
    printf("QUADRADO:%.3lf\n" , quad);
    printf("RETANGULO:%.3lf\n" , retan);



    getch();
}
