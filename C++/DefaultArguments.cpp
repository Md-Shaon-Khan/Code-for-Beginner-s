#include<iostream>
#include<conio.h>
using namespace std;

int sum(int a, int b=10, int c=34)
{
   int z = a + b + c ;
   return z;
}


int main()
{
    cout<<sum(4)<<endl;

    cout<<sum(3,4)<<endl;

    cout<<sum(34,2,6)<<endl;


    getch();

}

