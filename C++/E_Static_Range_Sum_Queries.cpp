#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,t;
    cin>>n>>t;
    vector<ll>arr(n);
    for(ll i=0;i<n;i++)
        {
            cin>>arr[i];
        }

    while(t--)
    {
        

        

        ll a,b,sum=0;
        cin>>a>>b;

        for(ll i=a-1;i<b;i++)
        {
           sum += arr[i];
        }

        cout<<sum<<endl;





    }



    return 0;
}