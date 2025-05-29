#include<iostream>
#include<conio.h>

using namespace std;

float sum(int a , int b)
{
    return  a + b ;
}

float sum(float a , float b)
{
    return a + b ;
}

float sum(int a , float b)
{
    return a + b ;
}

float sum( float a , int b)
{
    return a + b ;
}


int main()
{
    cout<<sum(15,12.7f)<<endl;

    cout<<sum(200,100)<<endl;

    cout<<sum(100,20.54f)<<endl;

    cout<<sum(90.8f,30.7f)<<endl;

    getch();
}















