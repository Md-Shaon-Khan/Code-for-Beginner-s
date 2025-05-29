// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin>>t;

//     while(t--)
//     {
//         string s;
//         cin>>s;

//         int l = s.length();
        
//         int a=0,b=0;
//         for(int i=0;i<l;i++)
//         {
//             if(s[i]==')')
//             {
//                 ++a;
//             }
//             else
//             {
//                 ++b;
//             }


//         }
//         int c=0,d=0;
//         for(int i=0;i<l;i++)
//         {
//             if(s[i]=='(' && i%2==0)
//             {
//                 ++c;
//             }
//             else if(s[i]==')' && i%2==1)
//             {
//                 ++d;
//             }


//         }
//         if((a!=b)|| (a==b && c!=d && (c!=0 && d!=0)))
//         {
//             cout<<"YES"<<endl;
//             for(int i=0;i<2*l;i++)
//             {
//                 if(i<l)
//                 {
//                     cout<<"(";
//                 }
//                 else
//                 {
//                     cout<<")";
//                 }
//             }
//             cout<<endl;
//         }
//         else
//         {
//             cout<<"NO"<<endl;

//         }
        












//     }


//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        int l = s.length();

      
        string a, b;

    
        for (int i = 0; i < 2 * l; ++i) {
            if (i % 2 == 0) {
                a += '(';
            } else {
                a += ')';
            }
        }

       
        for (int i = 0; i < l; ++i) {
            b += '(';
        }
        for (int i = 0; i < l; ++i) {
            b += ')';
        }

       
        if (a.find(s) == string::npos) {
            cout << "YES\n" << a << endl;
        } else if (b.find(s) == string::npos) {
            cout << "YES\n" << b << endl;
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
