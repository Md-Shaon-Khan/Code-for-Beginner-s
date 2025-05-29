#include<iostream>
#include<conio.h>
using namespace std;

int sum(int x, int y)
{
    int z =  x + y;
    return z;
}


int main()
{

    int x,y;

    cout<<"Enter first number :";
    cin>>x;
    cout<<endl;

    cout<<"Enter second number :";
    cin>>y;
    cout<<endl;

    cout<<"Sum of these two :"<<sum(x,y);


    getch();
}
