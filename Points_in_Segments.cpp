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

    for (int i = 1; i <= t; i++)
    {
        int n,q;

        cin >> n >> q;
        int a[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        

        cout << "Case " << i << ":\n";

        while (q--)
        {
            int x,y;
            cin >> x >> y;

            cout << upper_bound(a,a+n,y) - lower_bound(a,a+n,x);
        }
        
    }
     
    return 0;
}
