#include<iostream>
#include<conio.h>

using namespace std;

struct Student
{

    char stuName[50];
    int stuRoll;
    int stuAge;
    int stuPos;

};


int main()
{

    Student S;
    cout<<"Enter the student name :";
    cin.getline(S.stuName,50);
    cout<<"Enter the student roll :";
    cin>>S.stuRoll;
    cout<<"Enter the student age :";
    cin>>S.stuAge;
    cout<<"Enter the student position :";
    cin>>S.stuPos;


    cout<<endl;
    cout<<"Student Record :"<<endl;
    cout<<"Name    :"<<S.stuName<<endl;
    cout<<"Roll    :"<<S.stuRoll<<endl;
    cout<<"Age     :"<<S.stuAge<<endl;
    cout<<"Position:"<<S.stuPos<<endl;



    getch();
}
