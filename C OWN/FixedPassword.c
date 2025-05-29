#include<stdio.h>
int main()
{

    int num,i;

    while(1)
    {
        printf("Enter the password of four digits :");


            scanf("%d",&num);




        if(num != 2002)
            printf("Senha Invalida.\n");

        else if(num == 2002)
        {
          printf("Acesso Permitido.\n");
            break;
        }


    }




    getch();
}
