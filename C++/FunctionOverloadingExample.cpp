#include<iostream>
#include<conio.h>

using namespace std;

class Addition
{
public:
    int sum(int num1 ,int  num2 ,int num3)
    {
        return num1 + num2 + num3;
    }
    int sum(int num1, int num2, int num3 ,int num4)
    {
        return num1 + num2 + num3 + num4;
    }
};

int main()
{
    Addition obj;

    cout<<"Sum of three numbers : "<< obj.sum(45,87,28)<<endl;
    cout<<"Sum of four numbers  : "<<obj.sum(64,99,21,65)<<endl;

    getch();

}

