#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int array1[n];

    for(int i=0;i<n;i++)
        cin>>array1[i];

    sort(array1,array1+n,greater<int>());

    for(int i=0;i<n;i++)
        cout<<array1[i]<<" ";



    return 0;
}
