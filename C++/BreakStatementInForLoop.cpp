#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int num=200;

    for(int num=200;num>=150;num--)
    {
        cout<<"Number :"<<num<<endl;
        if(num==185)
        {
            break;
        }

    }
    cout<<"Hey!I'm out of the loop.";

    getch();
}
