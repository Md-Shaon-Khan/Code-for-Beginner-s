#include<iostream>
#include<conio.h>
using namespace std;
int main()
{

    int num =2;
    switch(num+89)
    {
        case 1:cout<<"case 1 :"<<num<<endl;
        break;
        case 2:cout<<"case 2 :"<<num<<endl;
        break;
        case 3:cout<<"case 3 :"<<num<<endl;
        break;
        case 4:cout<<"case 4 :"<<num<<endl;
        break;
        case 5:cout<<"case 5 :"<<num<<endl;
        break;
        case 6:cout<<"case 6 :"<<num<<endl;
        break;
        case 7:cout<<"case 7 :"<<num<<endl;
        break;
        default: cout<<"Default :"<<num<<endl;
    }
    cout<<"Hey!!I'm out of the switch case.";

    getch();
}
