#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx,avx2,fma")
#define ll long long
#define ld long double
#define PI 3.1415926535897932384626433832795
 
int gcd(int a, int b) { if(a % b == 0) return b; else return gcd(b, a % b); }
int lcm(int a, int b) { return (a * b) / gcd(a, b); }
 
 
void shakil_sol() 
{
    ll n, s, m;
    cin >> n >> s >> m;
    vector<ll> v;
    v.push_back(0);

    while(n--) {
        ll l, r;
        cin >> l >> r;
        v.push_back(l);
        v.push_back(r);
    }
    v.push_back(m);

    ll mx = INT_MIN;
    for(ll i = 0; i < v.size(); i+=2) {
        ll ok = v[i+1] - v[i];
        mx = max(ok, mx);
    }    

    if(mx>=s)
    {
        cout<< "YES" << "\n";
    }
    else
    {
        cout<< "NO" << "\n";
    }
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
 