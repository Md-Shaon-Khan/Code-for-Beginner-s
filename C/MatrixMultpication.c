#include<stdio.h>
int main()
{

    int first[10][10],second[10][10],result[10][10],sum=0;
    int r1,r2,c1,c2,i,j,k;

    printf("Enter rows and colums for the first matrix :");
    scanf("%d %d" , &r1, &c1);


    printf("Enter rows and colums for the second matrix :");
    scanf("%d %d" , &r2, &c2);

   while(c1 != r2)
   {
    printf("Error !! Column of the first matrix is not equal to rows of second matrix.\n");


    printf("Enter rows and colums for the first matrix :");
    scanf("%d %d" , &r1, &c1);


    printf("Enter rows and colums for the second matrix :");
    scanf("%d %d" , &r2, &c2);

   }

   printf("Enter the elements of first matrix :\n");
   for(i=0;i<r1;i++)
   {
       for(j=0;j<c1;j++)
       {
           printf("First[i][j] :" , i , j);
           scanf("%d" , &first[i][j]);
       }
       printf("\n");
   }

   printf("Enter the elements of second matrix :\n");
   for(i=0;i<r2;i++)
   {
       for(j=0;j<c2;j++)
       {
           printf("Second[i][j] :" , i , j);
           scanf("%d" , &second[i][j]);
       }
       printf("\n");

   }


   for(i=0;i<r1;i++)
   {
       for(j=0;j<c2;j++)
       {
           for(k=0;k<c1;k++)
           {
               sum = sum + first[i][k] * second[k][j];

           }
           result[i][j] = sum;
           sum = 0;
       }
   }




   printf("First Matrix =");
   for(i=0;i<r1;i++)
   {
       for(j=0;j<c1;j++)
       {
           printf("\t%d " ,first[i][j]);
       }
       printf("\n\t");
   }

   printf("\n\n");
   printf("Second Matrix =");
   for(i=0;i<r1;i++)
   {
       for(j=0;j<c1;j++)
       {
           printf("\t%d " ,second[i][j]);
       }
       printf("\n\t");
   }


   printf("\n\n");
   printf("Result Matrix =");
   for(i=0;i<r1;i++)
   {
       for(j=0;j<c2;j++)
       {
           printf("\t%d " ,result[i][j]);
       }
       printf("\n\t");
   }







    return 0;
}
