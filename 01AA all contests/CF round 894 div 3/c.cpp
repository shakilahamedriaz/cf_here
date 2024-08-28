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

    ll n;
    cin >> n;

    vector<ll> v(n+1);
    map<ll, ll> mp1, mp2;

    for(ll i = 1; i<=n; i++)
    {
        ll x;
        cin >> x;
        v[i] = x; 
        
        mp1[i] = x;  // i index e x er val rakhlam
        mp2[x] = i;  // store the index of x, x er index rakhlam
    }
    //5 4 3 2 1
    //1 2 3 4 5
    for(ll i = 1; i <= n; i++)
    {
        ll t = v[i]; // t = 5
        ll l = mp1[t]; // l = 1
        ll u = mp2[l]; // u = 5

        if(t != u)
        {
            cout<< "NO" << "\n";
            return;
        }
    }

    cout<< "YES" << "\n";

    
}

int32_t main() 
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;
    while(t--)
    {
        shakil_sol();
    }
   
    return 0;
}

