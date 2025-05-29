#include<iostream>
#include<vector>
using namespace std;

void display(vector<int>&v)
{
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<"  ";
    }
    cout<<endl;

}
int main()
{

    vector<int> vec1;
    int element,size;
    cout<<"Enter the size of your vector :";
    cin>>size;
    for(int i=0;i<size;i++)
    {
        cout<<"Enter an element to add this vector :";
        cin>>element;
        vec1.push_back(element);

    }
    display(vec1);
    
    vector<int> :: iterator pp = vec1.begin();
    vec1.insert(pp+1,4,1984);

    vec1.pop_back();

    display(vec1);

    return 0;
}