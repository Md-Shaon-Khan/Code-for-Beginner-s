#include<iostream>
using namespace std;
int main()
{
    long long int a,b,c,d,sum1;

    cin>>a>>b>>c>>d;

    long long int sum[4];
    sum[0] = a * c;
     sum[1] = a * d;
    sum[2]= b * c;
    sum[3] = b * d;

    for(int i=0;i<4-1;i++)
    {
        for(int j=i+1;j<4;j++)
        {
            if(sum[i] > sum[j])
            {
            sum1 = sum[i];
            sum[i] = sum[j];
            sum[j] = sum1;
            }

        }
    }

    cout<<sum[3];



    return 0;
}
