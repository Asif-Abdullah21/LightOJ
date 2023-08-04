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

int main()
{
    FIO;
    int t;
    cin >> t;
    int i=1;

    while (i<=t)
    {
        int p,s,r;
        cin>> p >> s >> r;
        cout << "Case " <<i << ": ";

        if(p==s && r!=1) cout << "No\n";
        else cout << "Yes\n";

        i++;
    }
     
    return 0;
}
