#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx,avx2,fma")
#define ll long long
#define ld long double
#define PI 3.1415926535897932384626433832795

int gcd(int a, int b) { if(a % b == 0) return b; else return gcd(b, a % b); }
int lcm(int a, int b) { return (a * b) / gcd(a, b); }

struct Runtime {
    clock_t start;
    Runtime() {
        start = clock();
    }
    ~Runtime() {
        cout << "Runtime: " << fixed << setprecision(3) << (double) (clock() - start) / CLOCKS_PER_SEC << "s\n";
    }
};

void shakil_sol() 
{
    ll tc;
    cin >> tc;
    while (tc--)
    { 

        ll n;
        cin >> n;
        vector< ll > a(n);

        for(ll i = 0; i < n; i++) cin >> a[i];
        if(is_sorted(a.begin(), a.end()))
        {
            cout<< "YES" << '\n';
            continue;
        }
        

        ll lastVal = 0;
        vector< ll > ans;

        for(ll i = 0; i < n; i++)
        {
            ll v = a[i]/10;
            ll r = a[i]%10;

            if(v >= lastVal && r >= v)
            {
                 lastVal = r;
                 ans.push_back(v);
                 ans.push_back(r);
            }
            else
            {
                ans.push_back(a[i]);
                lastVal = a[i];
            }
        }

        if(is_sorted(ans.begin(), ans.end()))
        {
            cout<< "YES" << '\n';
        }
        else
        {
            cout<< "NO" << '\n';
        }
      

    }
}

int32_t main() 
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    shakil_sol();

    return 0;
}

