#include<iostream>
using namespace std;
int main()
{
    int n;
    long long a[n],b[n];
    cin>>n;
    for(int i=0;i<n;i++)
    {
       cin>>a[i]>>b[i];

    }
    for(int i=0;i<n;i++)
    {
        if(a[i] > b[i])
        {
            cout<<">"<<endl;
        }
        else if(a[i] < b[i])
        {
            cout<<"<"<<endl;
        }
        else
        {
           cout<<"="<<endl;
        }
    }

    return 0;
}
