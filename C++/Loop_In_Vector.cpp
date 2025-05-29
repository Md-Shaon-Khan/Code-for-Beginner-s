#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>shaon;

    for(int i=0; i <5;i++)
    {
        int element;
        cout<<"Enter the element in vector : ";
        cin>>element;
        shaon.push_back(element);
    }
    for(int i=0 ;i<shaon.size();i++)
    {
         cout<<shaon[i]<<"  ";
    }
    cout<<endl;

    shaon.insert(shaon.begin()+2,99);
    
    for(int i=0 ;i<shaon.size();i++)
    {
         cout<<shaon[i]<<"  ";
    }
    cout<<endl;

    shaon.erase(shaon.end()-3);

    for(int i=0 ;i<shaon.size();i++)
    {
         cout<<shaon[i]<<"  ";
    }
    cout<<endl;

    shaon.pop_back();

    for(int i=0 ;i<shaon.size();i++)
    {
         cout<<shaon[i]<<"  ";
    }
    cout<<endl;





}