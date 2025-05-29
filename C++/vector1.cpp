#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>shaon;

    shaon.push_back(55);
    shaon.push_back(33);
    shaon.push_back(44);

    /*for(int i=0;i<shaon.size();i++)
    {
        cout<<shaon[i]<<endl;
    }*/
    vector<int>::iterator itt;
    
    for(itt = shaon.begin();itt != shaon.end();itt++)
    {
        cout<<*itt<<endl;
        
    }

    shaon.pop_back();

    vector<int>Nayem(2,2084);

    swap(shaon,Nayem);
    for(auto element : shaon){
        cout<<element<<endl;
    }
    for(auto element : Nayem){
        cout<<element<<endl;
    }






    return 0;
}