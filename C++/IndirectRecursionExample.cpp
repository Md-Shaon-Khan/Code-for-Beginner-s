#include<iostream>
#include<conio.h>
using namespace std;

int fa(int);
int fb1(int);

int fa(int n)
{
    if(n<=1)
        return 1;
    else
        return n*fb1(n-1);
}

int fb1(int n)
{
    if(n<=1)
        return 1;
    else
        return n*fa(n-1);
}

int main()
{

    int num=10;
    cout<<fa(num)<<endl;
    int num1=5;
    cout<<fb1(num1)<<endl;




    getch();
}
