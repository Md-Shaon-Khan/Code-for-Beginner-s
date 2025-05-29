#include<stdio.h>
float sum(float a,float b, float c)
{
    float ss = a+b+c;

    return ss;

}

float average(float abns)
{
    abns = abns / 3;

    

    return abns ;
}



int main()
{
    float a,b,c;
    printf("Enter the value : ");
    scanf("%f %f %f",&a,&b,&c);

    float ok = sum(a,b,c);
    float avg = average(ok);

    printf("Average = %.2f",avg);



    return 0;
}