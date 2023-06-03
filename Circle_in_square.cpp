#include <bits/stdc++.h>
#define endl "\n"
#define nn (cout << "NO\n")
#define yy (cout << "YES\n")
#define ss " "
#define sort(a) sort(a, a + n)
#define rev(a) reverse(a, a + n)
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

    for (int i=1;i<=t;i++)
    {
        double r;
        cin >> r;
        double pi = 2 * acos(0.0);
        double b = pi * (r * r);
        double x = r + r;
        double s = x * x;
        cout << "Case "<< i <<": ";
        cout << fixed << setprecision(2) << s - b << endl;
    }

    return 0;
}
