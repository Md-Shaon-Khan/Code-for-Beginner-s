#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=0;

    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)
    {
       cin>>arr[i];
    }

    sort(arr,arr+n);


    int min = arr[0];
    int max = arr[n-1];

    for(int i=min,j=0;j<n-1;i++,j++)
    {
        if(i!=arr[j])
            ++count;

    }
    cout<<count;




    return 0;
}
