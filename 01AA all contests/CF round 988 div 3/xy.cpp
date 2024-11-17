#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx,avx2,fma")
#define ll long long
#define ld long double
#define PI 3.1415926535897932384626433832795
#define endl "\n"

int gcd(int a, int b) { return b == 0 ? a : gcd(b, a % b); }
int lcm(int a, int b) { return (a * b) / gcd(a, b); }

void shakil_sol() 
{
    int t; 
    cin >> t;
    while (t--) 
    {
        int k; 
        cin >> k;
        vector<int> v(k);
        for (int i = 0; i < k; i++) {
            cin >> v[i];
        }

        sort(v.begin(), v.end());
        int temp = k - 2; 
        unordered_set<int> s(v.begin(), v.end()); 

        int x = -1, y = -1; 
        for (auto u : v)
         {
            if (u != 0 && temp % u == 0) 
            {
                int ache = temp / u;
                if (s.count(ache)) 
                {
                    x = u;
                    y = ache;
                    break;
                }
   
            }
        }

        cout << x << " " << y << endl;
    }
}

int32_t main() 
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    shakil_sol();
    
    return 0;
}
