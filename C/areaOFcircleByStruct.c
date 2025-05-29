#include<stdio.h>
#include<math.h>

struct circle
{
    float radius;
    float area,perimeter;
};

int main()
{
    struct circle circle_1,circle_2;

   printf("Enter the radius of first circle :");
   scanf("%f",&circle_1.radius);
   printf("Enter the radius of second circle :");
   scanf("%d",&circle_2.radius);

   circle_1.area = M_PI * pow(circle_1.radius,2);
   circle_2.area = M_PI * pow(circle_2.radius,2);

   circle_1.perimeter = 2 * 3.1416 * circle_1.radius;
   circle_2.perimeter = 2 * 3.1416 * circle_2.radius;

   printf("First circle result :\n");
   printf("Area of first circle : %.2f\n",circle_1.area);
   printf("Perimeter of first circle :%.2f\n",circle_1.perimeter);

   printf("Second circle result :\n");
   printf("Area of second circle : %.2f\n",circle_2.area);
   printf("Perimeter of second circle :%.2f\n",circle_2.perimeter);

    return 0;
}
