#include<iostream>
#include<conio.h>
using namespace std;

class A{
public:
   void disp() {
       cout<<"Parent Class disp() function"<<endl;
   }
   void xyz() {
       cout<<"xyz() function of parent class";
   }
};

class B : public A{
public:

    void disp() {
       cout<<"Child class disp() function"<<endl;
    }
};
int main(){

    B obj;
    obj.disp();

    A obj2;
    obj2.disp();

    A obj3;
    obj3.xyz();

    getch();
}
