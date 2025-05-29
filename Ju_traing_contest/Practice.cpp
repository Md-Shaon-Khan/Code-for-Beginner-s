#include<iostream>
using namespace std;
int main()
{
    int n,a,count=0;
    cin>>n;
    int arr[n];
   
    
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

        for(int j=1;j<=arr[i];j++)
        {
            if(arr[i] % j == 0)
            {
                ++count;
            }
        }
        cout<<count<<endl;
        count=0;
    }
        
    
    
    return 0;
}