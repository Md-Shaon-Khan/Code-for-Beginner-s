#include<stdio.h>
int main()
{
    int math,phy,chem,total,math_phy;

    printf("Input the marks obtained in Physics :");
    scanf("%d",&phy);
    
    printf("Input the marks obtained in Chemistry :");
    scanf("%d",&chem);
    
    printf("Input the marks obtained in Mathematics :");
    scanf("%d",&math);

    printf("Total marks of Maths, Physics and Chemistry : ");
    scanf("%d",&total);

    printf("Total marks of Maths and Physics : ");
    scanf("%d",&math_phy);

    if(phy>=55 && math>=65 && chem>=50 && total>=190 && math_phy>=140)
    {
        printf("The candidate is eligible for admission.");
    }
    else
    {
        printf("The candidate is not eligible for admission.");
    }
    



    return 0;
}