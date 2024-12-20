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
        
        int n;
        cin >> n;
        vector<ll> v(n), fre(n+1, 0);
        for(ll i = 0; i < n; i++)
        {
            cin >> v[i];
            fre[v[i]]++;
        }

        vector<ll> vis(n+1, 0);
        vector<ll> ans;

        for(ll i = 0; i < n; i++)
        {
            if(fre[v[i]] > 0)
            {
                ans.push_back(v[i]);
                fre[v[i]] = 0;
                vis[v[i]] = 1;
            }
        }

        for(ll i = 1; i<=n; i++)
        {
            if(ans.size() == n)
            {
                break;
            }
            if(!vis[i])
            {
                ans.push_back(i);
            }
        }

        for(auto val : ans)
        {
            cout << val << " ";
        }
        cout << endl;

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
