#include<iostream>
#include<conio.h>
#include<cmath>
using namespace std;


void display(int arr[2][3])
{
    int temp;
    for(int i=0; i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
           temp=arr[i][j];
           cout<<pow(temp,2)<<endl;
        }
    }
}

int main()
{
    int arr[2][3]={
                  {22,33,77},
                  {44,55,66}
                 };

display(arr);




    getch();
}
