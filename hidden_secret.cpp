#include <bits/stdc++.h>
#define endl "\n"
#define nn (cout << "NO\n")
#define yy (cout << "YES\n")
#define ss " "
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
    int n;
    cin >> n;
    cin.ignore();

    for (int i = 0; i < n; i++)
    {
        cout << "Case " << i+1 << ": ";
        string s1,s2,s3,s4;
        getline(cin,s1);
        getline(cin,s2);

        for (int i = 0; i < s1.size(); i++)
        {
            s1[i] = tolower(s1[i]);
            if(s1[i] != ' ') s3+=s1[i];
      
        }

        for (int i = 0; i < s2.size(); i++)
        {
            s2[i] = tolower(s2[i]);
            if(s2[i] != ' ') s4+=s2[i];
        }

        sort(s3.begin(),s3.end());
        sort(s4.begin(),s4.end());

        if(s3==s4) cout << "Yes\n";
        else cout << "No\n";
        
    }
     
    return 0;
}


//-----------------------------------------------------------------------------


// #include <bits/stdc++.h>
// #define endl "\n"
// #define nn (cout << "NO\n")
// #define yy (cout << "YES\n")
// #define ss " "
// #define ll long long
// #define ull unsigned long long
// #define gcd(a, b) __gcd(a, b)
// #define lcm(a, b) ((a / gcd(a, b)) * b)
// #define pii pair<int, int>
// #define pll pair<long long, long long>
// #define mm(a, x) memset(a, x, sizeof(a))
// #define FIO                       \
//     ios_base::sync_with_stdio(0); \
//     cin.tie(0);                   \
//     cout.tie(0);
// using namespace std;
// int main()
// {
//     FIO;
//     int n;
//     cin >> n;
//     cin.ignore();

//     for (int i = 0; i < n; i++)
//     {
//         cout << "Case " << i+1 << ": ";
//         string s1,s2,s3,s4;
//         getline(cin,s1);
//         getline(cin,s2);

//         for (int i = 0; i < s1.size(); i++)
//         {
//             s1[i] = tolower(s1[i]);   
//         }

//         for (int i = 0; i < s2.size(); i++)
//         {
//             s2[i] = tolower(s2[i]);
//         }

//         sort(s1.begin(),s1.end(),greater<char>());
//         sort(s2.begin(),s2.end(),greater<char>());

//         int f=1;

//         for (int i = 0; i < min(s1.size(),s2.size()); i++)
//         {
//             if(s1[i]!=s2[i])
//             {
//                 f=0;
//                 break;
//             }
//         }
        

//         if(f) cout << "Yes\n";
//         else cout << "No\n";
        
//     }
     
//     return 0;
// }




