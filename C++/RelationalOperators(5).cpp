#include<iostream>
#include<conio.h>
using namespace std;
int main()
{

    int num1,num2;
    num1 = 1083;
    num2 = 1084;

    //== returns true if both the left side and right side are equal
    if (num1==num2)
    {
        cout<<" num1 and num2 are equal"<<endl;
    }
    else
    {
        cout<<" num1 and num2 are not equal "<<endl;
    }

    // != returns true if left side is not equal to the right side of operator.
    if(num1 != num2)
    {
        cout<<" num1 and num2 are not equal "<<endl;
    }
    else
    {
        cout<<" num1 and num2 are equal "<<endl;
    }

    // > returns true if left side is greater than right.
    if(num1 > num2)
    {
        cout<<" num1 is greater than num2."<<endl;
    }
    else
    {
        cout<<" num1 is not greater than num2."<<endl;
    }

    //< returns true if left side is less than right side.
    if(num1 < num2)
    {
        cout<<" num1 is not greater than num2"<<endl;
    }
    else
    {
        cout<<"num1 is greater than num2"<<endl;
    }

    //>= returns true if left side is greater than or equal to right side.
    if(num1>=num2)
    {
        cout<<"num1 is greater than or equal to num2"<<endl;
    }
    else
    {
        cout<<"num1 is not greater than or equal to num2"<<endl;
    }

    //<= returns true if left side is less than or equal to right side.
    if(num1<=num2)
    {
        cout<<"num1 is less than or equal to num2"<<endl;
    }
    else
    {
        cout<<"num1 is not less than or equal to num2"<<endl;
    }





    getch();
}

