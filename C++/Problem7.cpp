#include<iostream>
#include<conio.h>
#include<iomanip>

using namespace std;
int main()
{
    double A,B,C,MEDIA;

    cout<<"Enter number A :";
    cin>>A;

    cout<<"Enter number B :";
    cin>>B;

    cout<<"Enter number C :";
    cin>>C;

    MEDIA = (A/10 * 2) + (B/10 * 3) + (C/10 * 5);
    cout <<"MEDIA =" <<fixed <<setprecision(1)<<MEDIA<<endl;

    getch();
}
