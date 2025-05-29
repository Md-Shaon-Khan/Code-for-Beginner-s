#include<iostream>
#include<conio.h>

using namespace std;

class Demo
{
private :
    int num;
    char ch;
public:
    Demo &setnum(int num)
    {
        this ->num=num;
        return *this;
    }
    Demo &setch(char ch)
    {
        this->ch=ch;
        return *this;
    }
    void DisplayMyValues()
    {
        cout<<num<<endl;
        cout<<ch<<endl;
    }

};

int main()
{

    Demo obj;

    obj.setnum(1084).setch('N');
    obj.DisplayMyValues();




    getch();
}
