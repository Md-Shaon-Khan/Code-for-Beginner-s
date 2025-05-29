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
        sum += array[i];
    }

    float avg = (float)sum / size;

    cout<<"The average is:"<<avg;

    return 0;


}