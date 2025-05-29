/*goto statements are almost never used in any development
* as they are complex and makes your program much less readable and more error prone.
*In place of goto, you can use continue and break statement.*/



#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int num;
    cout<<"Enter any integer number :";
    cin>>num;

    if(num%2==0)
    {
        goto print;
        print:
            cout<<"Even number.";
    }
    else
    {
        cout<<"Odd number.";

    }





    getch();
}
