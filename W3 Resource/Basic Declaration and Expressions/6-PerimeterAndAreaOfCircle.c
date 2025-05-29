#include<stdio.h>
#include<math.h>
int main()
{

    int radius;
    float Perimeter,Area;

    printf("Enter the radius of a circle :");
    scanf("%d",&radius);

    Perimeter = 2*3.1416*radius;
    Area = radius * radius * 3.1416;

    printf("Perimeter of the circle = %f inches",Perimeter);
    printf("\nArea of the circle = %f square inches",Area);




    return 0;
}
