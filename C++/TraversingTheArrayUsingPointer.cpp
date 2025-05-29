#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int *p;
    int arr[]={22,33,44,55,66};
    p=arr;
    for(int i=0;i<5;i++)
    {
        cout<<*p<<endl;
        p++;
    }



    getch();
}
