#include<stdio.h>

void display(char s1[])
{

 int i=0;
 while(s1[i] != '\0')
 {
     printf("%c  ", s1[i]);
     i++;
 }


}

int main()
{
   char str[] = "Shaon";

   display(str);


   getch();
}
