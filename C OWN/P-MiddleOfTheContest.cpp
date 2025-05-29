#include<iostream>
using namespace std;
int main()
{
    int h1,m1,h2,m2,h3,h4,h5;

    cin>>h1; cout<<:; cin>>m1;
    cin>>h2 cout<<: cin>>m2;

    h3 = (60*h1)+m1;
    h4 = (60*h2)+m2;

    h5 = (h3+h4)/2;

    printf("%02d:%02d",h5/60,h5%60);










    return 0;
}
