#include <bits/stdc++.h>
#define endl "\n"
#define nn (cout << "NO\n")
#define yy (cout << "YES\n")
#define ss " "
#define sort(a) sort(a,a+n)
#define rev(a) reverse(a,a+n)
#define ll long long
#define ull unsigned long long
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a / gcd(a, b)) * b)
#define pii pair<int, int>
#define pll pair<long long, long long>
#define sz(v) v.size()
#define mm(a, x) memset(a, x, sizeof(a))
#define FIO                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
using namespace std;
int main()
{
    FIO;
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cout << "Case " <<i+1<<": ";

        ll w;
        cin >> w;               //tutorial//

        if(w%2!=0) cout << "Impossible\n";
        else{
            ll n,m;

            n = w/2;
            m = 2;

            while (n%2==0)
            {
                n /= 2;
                m *= 2;
            }

            cout << n << " " << m << endl;
            
            
        }
    }
     
    return 0;
}





// #include <bits/stdc++.h>
// #define endl "\n"
// #define nn (cout << "NO\n")
// #define yy (cout << "YES\n")
// #define ss " "
// #define sort(a) sort(a,a+n)
// #define rev(a) reverse(a,a+n)
// #define ll long long
// #define ull unsigned long long
// #define gcd(a, b) __gcd(a, b)
// #define lcm(a, b) ((a / gcd(a, b)) * b)
// #define pii pair<int, int>
// #define pll pair<long long, long long>
// #define sz(v) v.size()
// #define mm(a, x) memset(a, x, sizeof(a))
// #define FIO                       \
//     ios_base::sync_with_stdio(0); \
//     cin.tie(0);                   \
//     cout.tie(0);
// using namespace std;
// int main()
// {
//     FIO;
//     int t;
//     cin >> t;

//     for (int i = 0; i < t; i++)
//     {
//         cout << "Case " <<i+1<<": ";

//         ll w;
//         cin >> w;

//         if(w%2!=0) cout << "Impossible\n";
//         else{
//             int cnt=0;

//             while (w%2==0)
//             {
//                 cnt++;
//                 w/=2;
//             }

//             ll val1 = 1;

//             for (int i = 1; i <= cnt; i++)
//             {
//                 val1 = val1*2;
//             }

//             cout << w << " " << val1 << endl;
            
            
//         }
//     }
     
//     return 0;
// }
