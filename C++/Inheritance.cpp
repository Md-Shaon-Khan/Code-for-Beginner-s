#include<iostream>
#include<conio.h>

using namespace std;

class Teacher
{
public:

      Teacher ()
      {
          cout<<"Hey Guys, I am yours Headteacher."<<endl;

      }

      string collegeName="Jahangirnagar University School and College";

};

class MathTeacher : public Teacher
{
public:

    MathTeacher()
    {
        cout<<"Hello Student, I am a Math Teacher."<<endl;
    }

    string mainsub="Math";
    string name="Shaon";
};


int main()
{
    MathTeacher obj;

    cout<<"Name :"<<obj.name<<endl;
    cout<<"College Name :"<<obj.collegeName<<endl;
    cout<<"Main Subject :"<<obj.mainsub<<endl;

    getch();
}








