#include<iostream>
#include<conio.h>

using namespace std;

class DemoClass
{

public:

    int demoClass(int i)
    {
        return i;
    }

    double demoClass(double d)
    {
        return d;
    }
};

int main()
{
    DemoClass obj;

    cout<<"Integer type Variable :"<<obj.demoClass(1084)<<endl;
    cout<<"Double  type Variable :"<<obj.demoClass(83.1084)<<endl;

    getch();
}

