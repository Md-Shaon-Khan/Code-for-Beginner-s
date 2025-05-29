/*if-else-if statement is used when we need to check multiple conditions.
  In this control structure we have only one “if” and one “else”, however we can have multiple “else if” blocks */

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int num;
    cout<<"Enter any integer number between 1 & 99999: ";
    cin>>num;


    if(num<100&&num>=1)
    {

    cout<<"Its a two digit number";
       if(num==1)
       {
           cout<<"(worng)"<<endl;
           cout<<"Its not a two digit numnber .Actually it is a one digit number.";
       }

    }

    else if(num<1000 && num>=100)
    {
        cout<<"Its a three digit number."<<endl;
    }

    else if(num<10000 && num>=1000)
    {
        cout<<"Its a four digit number."<<endl;
    }
    else if(num<100000 && num>=10000)
    {
        cout<<"Its a five digit number."<<endl;
    }
    else
    {
        cout<<"Number is not between 1 & 99999."<<endl;
    }


    getch();
}
