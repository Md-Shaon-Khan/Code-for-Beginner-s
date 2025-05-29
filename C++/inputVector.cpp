#include<bits/stdc++.h>
using namespace std;
int main()
{
    /*
    vector<int>sha;
    int n;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        sha.push_back(i);

    }
    int sz = sha.size();

    for(int i=0;i<sz;i++)
    {
        cout<<sha[i]<<" ";
    }
    cout<<endl;

    for(auto it = sha.begin();it != sha.end();it++)
    {
        cout<<*(it)<<" ";
    }
    cout<<endl;
    
    sha.pop_back();
    for(auto it = sha.begin();it != sha.end();it++)
    {
        cout<<*(it)<<" ";
    }
    cout<<endl;
    sha.erase(sha.begin()+2);
    for(auto it = sha.begin();it != sha.end();it++)
    {
        cout<<*(it)<<" ";
    }
    cout<<endl;

    sha.clear();

    for(auto it:sha)
    {
        cout<<it<<" ";
    }
    cout<<endl;

    

    

*/

    string s;

    cin>>s;
    cout<<s<<"\n";


    vector<string>v;

    for(int i=0;i<5;i++)
    {
        string s;
        cin>>s;
        v.push_back(s);
    }
    for(auto it:v)
    cout<<it<<endl;

    sort(v.begin(),v.end());
    for(auto it:v)
    cout<<it<<endl;  

   // reverse(v.begin(),v.end());
   //cout<<v<<endl;

    
} // namespace std;

