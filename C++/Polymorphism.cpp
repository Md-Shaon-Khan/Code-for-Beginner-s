#include<iostream>
#include<conio.h>
using namespace std;

class sum
{
public:

    int add(int num1, int num2)
    {
        return num1+num2;
    }
    int add(int num1, int num2,int num3)
    {
        return num1+ num2 +num3;
    }
};

int main()
{
    sum obj;
    cout<<obj.add(11,55,66)<<endl;

    cout<<obj.add(678,790);
    getch();
}
