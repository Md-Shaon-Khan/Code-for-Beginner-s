#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,p,m;
    cin>>s>>p>>m;

    s = s+p;

    sort(s.begin(),s.end());
    sort(m.begin(),m.end());

    if(s==m)
        cout<<"YES";
    else
        cout<<"NO";



    return 0;
}

