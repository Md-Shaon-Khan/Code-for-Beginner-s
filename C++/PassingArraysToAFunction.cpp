#include<iostream>
#include<conio.h>
using namespace std;


void sum(int arrr1[], int arrr2[])
{
    int okay[4];
    for(int i=0;i<4;i++)
    {
        okay[i]=arrr1[i]+arrr2[i];
        cout<<okay[i]<<endl;

    }


}

int main()
{
    int a[]={23,55,63,656};
    int b[]={77,34,98,66};
    sum(a,b);


    getch();
}


