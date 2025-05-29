#include<iostream>
#include<conio.h>

using namespace std;


class Demo
{
private:
    int num;
    char ch;

public:
    void SetMyValues(int num,char ch)
    {
        this ->num=num;
        this ->ch=ch;
    }
    void DisplayMyValues()
    {
        cout<<"The number you entered :"<<num <<endl;
        cout<<"The character you entered :"<<ch<<endl;

    }


};

int main()

{
    Demo obj;

    obj.SetMyValues(101,'S');
    obj.DisplayMyValues();



    getch();
}
