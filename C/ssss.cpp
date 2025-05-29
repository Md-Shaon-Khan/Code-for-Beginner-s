#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,nn,temp,max,max2;
    cin>>n;
    int sum[n];

    for(int i=0;i<n;i++)
    {
       cin>>nn;
        int array[nn];

        for(int i=0;i<nn;i++)
        {
            cin>>array[i];
        }
        int p = sizeof(array) / sizeof(array[0]);

        sort(array,array+n);


         max = array[nn-1];

        for(int i=nn-1;i>=0;i--)
        {
            if(array[i]!=max)
            {
                max2 = array[i];
                break;
            }

        }
        sum[i] = max + max2;


    }
    for(int i=0;i<n;i++)
    {
       cout<<sum[i]<<endl;
    }


    return 0;
}
