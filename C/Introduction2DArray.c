#include<stdio.h>
int main()
{
    int array[3][4]={

                      {10,20,30,40},
                      {110,120,130,140},
                      {210,220,230,240}

                    };

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            printf("%d " , array[i][j]);

        }
        printf("\n");
    }



    getch();
}
