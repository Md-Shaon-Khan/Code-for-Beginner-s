#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int var =101;
    int *p;

    p=&var;

    cout<<"Address of variable :"<<&var<<endl;
    cout<<"Address of variable :"<<p<<endl;
    cout<<"Address of p :"<<&p<<endl;
    cout<<"Value of var :"<<*p<<endl;

    getch();
}

