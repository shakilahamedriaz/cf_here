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
    ll arr[n];

    for(ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    vector<ll> ans;
    ans.push_back(arr[0]); 

    for(ll i = 1; i < n; i++)
    {
         if(arr[i-1] <= arr[i])
         {
            ans.push_back(arr[i]);
         }
         else
         {
             ans.push_back(1);
            //ans.push_back(arr[i]);
             ans.push_back(arr[i]);
         }
    }

    cout << ans.size() << "\n";  
    for(auto x : ans)
    {
        cout << x << " ";
    }
    cout << "\n";

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

