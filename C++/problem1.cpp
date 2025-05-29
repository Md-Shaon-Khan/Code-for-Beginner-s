#include<bits/stdc++.h>
using namespace std;

float CalculateAverage(int array[],int n)
{
    int sum=0;

    for(int i=0;i<n;i++)
    {
        sum += array[i];
    }

    return (float)sum/n;

}
int main()
{
    int sizeArray;
    int array[sizeArray];

    cout<<"Enter the size of array:";
    cin>>sizeArray;

    cout<<"Enter the elements of this array,";

    for(int i=0;i<sizeArray;i++)
    {
        cin>>array[i];
    }

    float averageArray = CalculateAverage(array,sizeArray);

    cout << fixed << setprecision(2);
    cout<<"The average of this array is"<<averageArray;

    return 0;


}