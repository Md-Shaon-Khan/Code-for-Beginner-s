#include<iostream>
#include<conio.h>
using namespace std;
int main()
{

    int num1;
    cout<<"Enter any natural number :";
    cin>>num1;

    if(num1<100)
    {
     /* This cout statement will only execute,
      * if the above condition is true
      */
      cout<<"Number is less than 100."<<endl;

    }
    if(num1>100)
    {
      /* This cout statement will only execute,
      if the above condition is true
      */
      cout<<"Number is greater than 100."<<endl;

    }
    if(num1==55)
    {
        cout<<"Number is 55.";
    }

    getch();


}
