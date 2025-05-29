#include<iostream>
#include<conio.h>
using namespace std;

class A
{
public:
    void display()
    {
        cout<<"Super Class Function."<<endl;
    }
};

class B : public A
{
public :
    void display()
    {
        cout<<"Sub Class Function."<<endl;
    }
};

int main()
{
    B obj1;
    obj1.display();

    A obj2;
    obj2.display();

    getch();

}
