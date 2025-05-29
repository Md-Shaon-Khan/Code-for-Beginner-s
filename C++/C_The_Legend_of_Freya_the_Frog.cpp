#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int t;
    cin >> t;
    
    while (t--) 
    {
        long long x, y, k;
        cin >> x >> y >> k;
        
        long long s_x = 2*((x + k - 1) / k)-1;
        long long s_y = 2*((y + k - 1) / k);
        
        cout << max(s_x ,s_y) << endl;
    }
    
    return 0;
}
