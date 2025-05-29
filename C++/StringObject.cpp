#include<iostream>
#include<conio.h>

using namespace std;

int main()
{

    string strr;
    cout<<"Enter a string :";
    getline(cin,strr);
    cout<<"You Entered :"<<strr<<endl;

    strr.push_back('k');
    cout<<"The string after push_back :"<<strr<<endl;

    strr.pop_back();
    cout<<"The string after pop_back :"<<strr<<endl;

    getch();
}
