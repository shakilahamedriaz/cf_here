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


void is_correspondence(string s, vector<ll> v)
{
    vector<ll> con_int;
    for(ll i = 0; i < s.size(); i++)
    {
        con_int.push_back(s[i] - '0');
    } 

    if(con_int == v)
    {
        cout << "YES" << "\n";
       
    }
    else
    {
        cout << "NO" << "\n";
    }
}

void shakil_sol() 
{
    ll n, m;
    cin >> n;
    vector<ll> v;
    for(ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        v.push_back(x);
    }
    cin >> m;
   

    while( m-- )
    {
        string s;
        cin >> s;
        
        if(s.size() == n)
        {
           is_correspondence(s, v);
        }
        else
        {
            cout<< "NO" << "\n";
        }
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

