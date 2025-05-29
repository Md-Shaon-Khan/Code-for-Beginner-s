#include<bits/stdc++.h>
using namespace std;

int main() {
    string num;
    int currentBase, convertedBase, dec = 0, pow = 1, minBase = 2;

    cout << "Enter the number: ";
    cin >> num;

    for (char ch : num) minBase = max(minBase, isdigit(ch) ? ch - '0' + 1 : ch - 'A' + 11);
    cout << "Minimum base: " << minBase << "\nEnter current base (>= " << minBase << "): ";
    
    cin >> currentBase;
    if (currentBase < minBase) return cout << "Invalid base!\n", 1;

    cout << "Enter target base (>= 2): ";
    cin >> convertedBase;
    if (convertedBase < 2) return cout << "Invalid target base!\n", 1;

    for (int i = num.size() - 1; i >= 0; i--, pow *= currentBase) 
        dec += (isdigit(num[i]) ? num[i] - '0' : num[i] - 'A' + 10) * pow;

    string result;
    while (dec) result += (dec % convertedBase < 10 ? '0' + dec % convertedBase : 'A' + dec % convertedBase - 10), dec /= convertedBase;
    
    reverse(result.begin(), result.end());
    cout << "Converted number: " << (result.empty() ? "0" : result) << endl;

    return 0;
}
