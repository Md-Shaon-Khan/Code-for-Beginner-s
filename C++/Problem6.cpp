#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
int main()
{
    float A,B,Avar;

    cout<<"Enter A :";
    cin>>A;
    cout<<fixed;
    cout<<setprecision(1)<<A;
    cout<<endl;
    cout<<"Enter B :";
    cin>>B;
    cout<<fixed;
    cout<<setprecision(1)<<B;

    cout<<endl;

    Avar = (A + B) / 2 ;
    cout<<"Avarage :"<<Avar ;



    getch();
}
