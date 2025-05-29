#include<iostream>
#include<conio.h>

using namespace std;

class HelloWorld
{
public:
    HelloWorld()
    {
        cout<<"Constructor is called."<<endl;
    }

    ~HelloWorld()
    {
        cout<<"Destructor is called."<<endl;

    }
    void display()
    {
        cout<<"Hello World!"<<endl;

    }
};


int main()
{
   HelloWorld obj;


   obj.display();

   getch();

}










