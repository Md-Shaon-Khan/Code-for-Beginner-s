#include<iostream>
#include<conio.h>

using namespace std;

class Add
{
public:

    int sum(int num1 , int num2)
    {
        return num1 + num2;
    }

    int sum(int num1, int num2, int num3)
    {
        return num1 + num2 + num3 ;
    }
};

int main()
{
    Add obj;

    cout<<"output :"<<obj.sum(10,45)<<endl;
    cout<<"output :"<<obj.sum(34,67,7784)<<endl;

    getch();
}
