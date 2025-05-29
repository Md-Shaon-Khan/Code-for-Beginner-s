#include<stdio.h>
int main()
{
    float m_taka;
    int taka_100,e_100_taka,taka_50,e_50_taka,taka_20,e_20_taka,taka_10,e_10_taka,taka_5,e_5_taka,taka_2,e_2_taka,taka_1,e_1_taka;
    int p_50,p_e_50,p_25,p_e_25,p_10,p_e_10,p_5,p_e_5,p_1;
    
    scanf("%f",&m_taka);

    int r_taka = m_taka;

    int e_taka = (m_taka - r_taka) * 100;
    

    taka_100      = r_taka / 100;
    e_100_taka    = r_taka % 100;

    taka_50       = e_100_taka / 50;
    e_50_taka     = e_100_taka % 50;

    taka_20       = e_50_taka / 20;
    e_20_taka     = e_50_taka % 20;

    taka_10       = e_20_taka / 10;
    e_10_taka     = e_20_taka % 10;

    taka_5        = e_10_taka / 5;
    e_5_taka      = e_10_taka % 5;

    taka_2       = e_5_taka / 2;
    e_2_taka     = e_5_taka % 2;


    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n",taka_100);
    printf("%d nota(s) de R$ 50.00\n",taka_50);
    printf("%d nota(s) de R$ 20.00\n",taka_20);
    printf("%d nota(s) de R$ 10.00\n",taka_10);
    printf("%d nota(s) de R$ 5.00\n",taka_5);
    printf("%d nota(s) de R$ 2.00\n",taka_2);

    taka_1       = e_2_taka  / 1;


    p_50          = e_taka / 50;
    p_e_50        = e_taka % 50;

    p_25          = p_e_50 / 25;
    p_e_25        = p_e_50 % 25;

    p_10          = p_e_25 / 10;
    p_e_10        = p_e_25 % 10;

    p_5           = p_e_10 / 5;
    p_e_5         = p_e_5 % 5;

    p_1           = p_e_5 / 1;
    

    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n",taka_1);
    printf("%d moeda(s) de R$ 0.50\n",p_50);
    printf("%d moeda(s) de R$ 0.25\n",p_25);
    printf("%d moeda(s) de R$ 0.10\n",p_10);
    printf("%d moeda(s) de R$ 0.05\n",p_5);
    printf("%d moeda(s) de R$ 0.01\n",p_1);
    



    return 0;
}