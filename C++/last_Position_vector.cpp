#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v(6);
    
    for(int i=0;i<6;i++)
    {
        cin>>v[i];

    }
    int x;
    cout<<"Enter X :";
    cin>>x;
    int ok=-1;
    for(int i=5;i>=0;i--)
    {
       if(v[i]==x)
       {
          ok = i+1;
          break;
       }
    }

    cout<<ok;




    return 0;
}