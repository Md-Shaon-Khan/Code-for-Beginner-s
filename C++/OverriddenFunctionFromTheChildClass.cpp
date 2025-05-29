#include<iostream>
#include<conio.h>

using namespace std;

class BaseClass
{
public:
    void display()
    {
        cout<<"Function of parent Class";
    }
};

class Derivedclass : public BaseClass{
public:
   void disp() {
      cout<<"Function of Child Class";
   }
};

int main()
{
    BaseClass obj = Derivedclass();
    obj.display();

    getch();
}
