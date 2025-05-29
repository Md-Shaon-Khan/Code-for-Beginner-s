#include <bits/stdc++.h>
using namespace std;
int main() 
{
    long long int n,count=0;
    
    cin >> n;

    long long array[n];
    
    for (long long int i = 0;i < n;i++) 
    {
        cin >> array[i];
    }

    for (int i = 1;i < n;i++) 
    {
        
        if (array[i-1] > array[i])
        {
            count += array[i-1] - array[i];
            array[i] = array[i-1];
        }

    }

    cout<<count;
    
    return 0;
}