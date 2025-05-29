//When there is an if statement inside another if statement then it is called the nested if statement.
//The structure of nested if looks like this:


#include<iostream>
#include<conio.h>
using namespace std;
int main()
{

   double num;
   cout<<"Enter any digit :";
   cin>>num;

   if(num<100)
   {
       cout<<"Number is less than 100."<<endl;
       if(num>50)
       {
           cout<<"Number is greater than 50.";
       }
   }

    if(num>100)
    {
        cout<<"Number is greater than 100.";
    }



    getch();
}
