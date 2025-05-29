#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int j=4;
    do
        {
          if(j==9)
          {
              j++;
              continue;
          }
          cout<<"J is : "<<j<<endl;
          j++;

        }while(j<10);


    getch();
}
