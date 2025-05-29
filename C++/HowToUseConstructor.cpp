#include<iostream>
#include<conio.h>

using namespace std;

class constructorDemo
{

public:
    int num;
    char ch;

    constructorDemo()
    {
        num=100;
        ch='S';
    }


} ;

int main()
{

 constructorDemo obj;
 cout<<"num :"<<obj.num<<endl;
 cout<<"ch :"<<obj.ch;


 getch();

}
