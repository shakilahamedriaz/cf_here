#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx,avx2,fma")
#define ll long long
#define ld long double
#define PI 3.1415926535897932384626433832795
#define endl "\n"

int gcd(int a, int b) { return (a % b == 0) ? b : gcd(b, a % b); }
int lcm(int a, int b) { return (a * b) / gcd(a, b); }

void shakil_sol() 
{
    int t; 
    cin >> t;

    while(t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for(int i = 0; i < n; i++) 
        {
            cin >> a[i];
        }

        bool can = false;
        int ans = -1;

        for(int i = 0; i < n; i++)
        {
            bool win = true;
            for(int j = 0; j < n; j++)
            {
                if(i != j && abs(a[i] - a[j]) % k == 0)
                {
                    win = false;
                    break;
                }
            }
            if(win)
            {
                ans = i + 1; // convert to 1-based index
                can = true;
                break;
            }
        }

        if(can)
        {
            cout << "YES" << endl;
            cout << ans << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
 
int32_t main() 
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0);

    shakil_sol();
    
    return 0;
}
