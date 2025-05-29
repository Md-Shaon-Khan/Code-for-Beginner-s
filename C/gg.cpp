#include<iostream>
using namespace std;
int main()
{

    int n,count=0;
    int a,b,c;

    cin>>n;

    for(int i=1;i<=n;i++)
    {

        cin>>a>>b>>c;

        if(a<=20 && b<=20 && c<=20)
        {

            ++count;
            cout<<"Case "<<count<<": good"<<endl;
        }
        else
        {
             ++count;
            cout<<"Case "<<count<<": bad"<<endl;

        }

    }

    return 0;
}
