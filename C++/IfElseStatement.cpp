/*Sometimes you have a condition and you want to execute a block of code if condition is true and execute another piece of code if the same condition is false.
This can be achieved in C++ using if-else statement.*/
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{

  int num;
  cout<<"please enter any digit sadia :";
  cin>>num;

  if(num<500)
  {
      cout<<"Number is less than 500."<<endl;
      if(num>100)
      {
          cout<<"Number is greater than 100."<<endl;
      }
  }
  else{
    cout<<"Number is greater than 500."<<endl;
    if(num<1000)
    {
        cout<<"Number is less than 1000."<<endl;
    }
  }

 getch();

}
