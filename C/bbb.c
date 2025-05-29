#include<stdio.h>
int main()
{
    int size;
    scanf("%d",&size);

    int array[size];
    for(int i=0;i<size;i++)
      scanf("%d",&array[i]);

    int Next_number;
    scanf("%d",&Next_number);



    for(int i=0;i<size;i++)
    {
        if(Next_number<array[i])
        {
            int p=i;
             for(int j=size;j>p;j--)
             {
                array[j] = array[j-1];

             }
             array[p] = Next_number;
        }
    }
    printf("\n\n");

    for(int i=0;i<=size;i++)
    {
        printf("%d\t",array[i]);
    }



    return 0;
}
