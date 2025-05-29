#include<iostream>
#include<conio.h>
using namespace std;

class Add
{
public:

    Add(int num1 , int num2)
    {
        cout<<(num1 + num2)<<endl;
    }


};

int main(void)
{
    int num1,num2;
    cout<<"Enter two integer number :";
    cin>>num1;
    cout<<"Another one is :";
    cin>> num2;
    Add obj1(num1,num2);

    Add obj2(50,60);

    Add obj3= Add (45,78);

    getch();

}
