#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int i=1;
    /* The loop would continue to print
    * the value of i until the given condition
    * i<=6 returns false.
    */

    while(i<=6)
    {
        cout<<"Value og variable i is :"<<i<<endl;i--;
    }

    getch();
}
