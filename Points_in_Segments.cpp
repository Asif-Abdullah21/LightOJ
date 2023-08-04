#include <bits/stdc++.h>
#define endl "\n"
#define nn (cout << "NO\n")
#define yy (cout << "YES\n")
#define ll long long
#define ull unsigned long long
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a / gcd(a, b)) * b)
#define pii pair<int, int>
#define pll pair<long long, long long>
#define mm(a, x) memset(a, x, sizeof(a))
#define FIO                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
using namespace std;

const int N = 1e6;

int main()
{
    FIO;
    int t;
    cin >> t;

    for (int j=1;j<=t;j++)
    {
        int n,q;
        cin >> n >> q;

        int a[n+2];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        cout << "Case " <<j<< ":\n";
        

        while (q--)
        {
            int l,r;
            cin >> l >> r;

            int upore = upper_bound(a,a+n,r)-a;
            int niche = lower_bound(a,a+n,l)-a;

            cout << upore - niche << endl;

           // cout << upore << " " << niche << endl;
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

//     for (int i = 1; i <= t; i++)
//     {
//         int n,q;

//         cin >> n >> q;
//         int a[n];

//         for (int i = 0; i < n; i++)
//         {
//             cin >> a[i];
//         }
        

//         cout << "Case " << i << ":\n";

//         while (q--)
//         {
//             int x,y;
//             cin >> x >> y;

//             cout << upper_bound(a,a+n,y) - lower_bound(a,a+n,x) << endl;
//         }
        
//     }
     
//     return 0;
// }
