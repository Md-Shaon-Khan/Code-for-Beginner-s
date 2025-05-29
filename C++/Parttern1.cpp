#include<bits/stdc++.h>
using namespace std;
int main()
{
    int line;

    cin>>line;
    int number = 1;
    for(int i=1;i<=line;i++)
    {
        for(int j=1;j<=line;j++)
        {
            cout<<number;
            if(number%line==0)
            {
                cout<<"\n";
            }

            number++;

            
        }

        
    }


    for(int i=1;i<=line;i++)
    {
        for(int j=line-i;j>=1;j--)
        {
            cout<<" ";
        }
        for(int j=1;j<=i;j++)
        {
            cout<<(char)number;
            if(i==j)
            {
                cout<<"\n";
            }
            number++;
        }
    }

    for(int i=1;i<line;i++)
    {
        for(int j=1;j<i;j++)
        {
            cout<<" ";
        }
        for(int j=line-i;j>=1;j--)
        {
            cout<<"#";
            number++;
        }

        cout<<endl;
    }





}