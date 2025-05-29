#include<stdio.h>
int main()
{
    float num,sum=0,num1=0;


        printf("Enter 6 numbers :");
        for(int i=0;i<6;i++)
        {
            scanf("%f" , &num);
            if(num>0)
            {
              num1 = num1 + num;
              sum=sum+1;
            }

        }


    printf("%.1f numbers are positive.\n",sum);
    printf("Avarage is %.1f.\n",num1/sum);








    getch();
}
