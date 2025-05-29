#include<stdio.h>
int main()
{
    float N1,N2,N3,N4,last,media;


    scanf("%f %f %f %f",&N1,&N2,&N3,&N4);

    media = (N1 * 2) + (N2 * 3) + (N3 * 4) + (N4 *1);
    media = media / 10;

    if(media >= 7.00)
    {
        printf("Media :%.1f",media);
        printf("\nAluna aprovado");
    }
    else if(media>=5.00 && media < 7.00)
    {
        printf("Media : %.1f",media);
        printf("\nAluno em exame\n");
        scanf("%f",&last);
        printf("Nota do exame : %.1f\n",last);
        media = (media + last) / 2;
        if(media > 5)
        {
            printf("Aluno aprovado.");
        }
        else
        {
            printf("Aluno reprovado.");
        }

        printf("\nMedia final :%.1f",media);
    }
    else
    {   printf("Media :%.1f",media);
        printf("\nAluno reprovado");
    }


    return 0;
}