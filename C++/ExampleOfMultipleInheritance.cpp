#include<iostream>
#include<conio.h>

using namespace std;

class A
{
public:
    A()
    {
        cout<<"Constructor of A class."<<endl;

    }
};

class B
{
public:
    B()
    {
        cout<<"Constructor of B class."<<endl;
    }
};

class C: public A, public B
{
public:
    C()
    {
        cout<<"Constructor of C class."<<endl;
    }
};


int main()
{
    C obj;
    getch();
}









