#include<iostream>
#include<conio.h>

using namespace std;

class A
{

public:
    A()
    {
        cout<<"Constructor of A Class."<<endl;
    }

};

class B : public A
{
public :
    B()
    {
        cout<<"Constructor of B Class."<<endl;
    }
};

int main()
{
    B obj;

    getch();
}













