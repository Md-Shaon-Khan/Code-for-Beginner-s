/*In the example below, we have a while loop
running from 10 to 200 but since we have a
break statement that gets encountered when
the loop counter variable value reaches 12,
the loop gets terminated and the control jumps
to the next statement in program after the loop body.*/


#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int num=10;
    while (num<=20)
    {
        cout<<"Value of num is : "<<num<<endl;
        if (num==12)
        {
            break;
        }
        num++;

    }
    cout<<"Hey,I am out of the lopp.";

    getch();
}
