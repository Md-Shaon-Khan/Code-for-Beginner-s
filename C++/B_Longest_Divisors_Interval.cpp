#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
    ll t;
    cin>>t;

    while(t--)
    {
        ll n;
        cin>>n;

        ll count(1);
        for(ll i=2;n%i==0 && i<=n;i++)
        {
            ++count;
        }
        cout<<count<<endl;
    }
    





    return 0;
}