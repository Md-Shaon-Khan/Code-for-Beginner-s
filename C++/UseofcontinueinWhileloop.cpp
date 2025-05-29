#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int j=10;
    while(j>=0)
    {

        if(j==8)
        {
            j--;
            continue;

        }

        if(j==4)
        {
            j--;
            continue;

        }

        cout<<"Value of j :"<<j<<endl;j--;

    }



    getch();
}
