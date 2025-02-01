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
       vector<int> a(n);
       for(int i = 0; i < n; i++) cin >> a[i];
       
       int mx = INT_MIN;
       int ans1 = 0;
       int ans2 = 0;
       int cnt1 = 0;
       int cnt2 = 0;

       for(int i = 0; i < n; i+=2)
       {
           cnt1 ++;
           mx = max(mx, a[i]);
       }
       ans1 = cnt1 + mx;

       for(int i = 1; i < n; i+=2)
       {
           cnt2 ++;
           mx = max(mx, a[i]);
           
       }
       ans2 = cnt2 + mx;

       cout<< max(ans1, ans2) << endl;
       
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
