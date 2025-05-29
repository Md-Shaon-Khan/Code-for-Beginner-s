#include<iostream>
#include<conio.h>

using namespace std;

class BaseClass
{
public:
    void display()
    {
        cout<<"Function of Parent Class."<<endl;
    }
};
class Derivedclass : public BaseClass
{
public:
    void display()
    {
        cout<<"Function of Child Class."<<endl;
    }
};

int main()
{
    Derivedclass obj = Derivedclass();
    obj.display();

    getch();
}

