#include<stdio.h>
int main()
{

    int R;
    double VOLUME;

    scanf("%d" , &R);

    VOLUME = (4/3) * 4.14159 * R * R * R;

    printf("VOLUME =%.3lf" , VOLUME);





    getch();
}
