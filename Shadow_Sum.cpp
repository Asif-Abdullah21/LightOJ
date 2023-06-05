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
    int j=1;

    while (j<=t)
    {
        int cnt[200002] = {0};

        int n;
        cin >> n;

        int x;

        int mx = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> x;
            int f = 0;
            if (x < 0)
            {
                x = abs(x);
                f = 1;
            }
            mx = max(mx, x);

            if (f == 1)
                cnt[x] = -x;
            else
                cnt[x] = x;
        }
        ll sum = 0;
        for (int i = 0; i <= mx; i++)
        {
            if (cnt[i] != 0)
                sum += cnt[i];
        }

        cout<< "Case "<<j<<": " << sum << endl;
        j++;
    }

    return 0;
}
