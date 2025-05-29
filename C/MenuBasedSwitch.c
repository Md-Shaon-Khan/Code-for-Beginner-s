#include<stdio.h>
int main()
{
    int choice;
    float fah1,cel1,fah2,cel2;


    printf("Temperature conversion menu\n");
    printf("1.Fahrenheit to celsius.\n");
    printf("2.Celsius to Fahrenheit.\n");
    printf("Enter a choice :");
    scanf("%d" , &choice);

    switch(choice)
    {
    case 1:
        {
            printf("\nEnter the fahrenheit :");
            scanf("%f" , &fah1);

            cel1 = (fah1 - 32)/ 1.8;
            printf("\nThe temperature in celsius is :%f\n" ,cel1 );
            break;
        }
    case 2:
        {
            printf("\nEnter the celsius :");
            scanf("%f" , &cel2);

           fah2=(1.8*cel2)+32;
            printf("\nThe temperature in fahrenheit is :%f\n" ,fah2 );
            break;
        }

    default:
        {
            printf("Invalid option");
        }

    }



    return 0;
}
