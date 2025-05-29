
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t != 0)
    {
        int x, y;
        cin >> x >> y;

        int total = 0, empty;

        if(y == 0)
            total = 0;
        else
            total = y / 2 + y % 2;

        if(y % 2 == 1)
        {
            empty = 11 + (y / 2) * 7;
        }
        else
        {
            empty = (y / 2) * 7;
        }

        if(empty >= x)
        {
            total += 0;
        }
        else
        {
            if(y == 0 || x != 0)
            {
                total = 1;
            }
            else if(x % empty == 0)
            {
                total += x / empty;
                total -= 1;
            }
            else
            {
                total += (x / empty);
            }
        }

        cout << total << endl;
        t--;
    }

    return 0;
}
