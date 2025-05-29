#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"Enter the size of an array:";
    int size;
    cin>>size;

    int array[size];
    int sum = 0;

    for(int i=0;i<size;i++){
        cin>>array[i];
        
    }

    cout<<"Search a item:";
    int search,count=0;
    cin>>search;
    
    for(int i=0;i<size;i++)
    {
        if(search==array[i])
        {
            cout<<"Number is found at index "<<i+1<<endl;
            count++;
        }
    }

    if(count==0)
    {
        cout<<"Number is not found";
    }




    return 0;
}