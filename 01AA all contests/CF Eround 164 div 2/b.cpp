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
         int n;
         cin >> n;

         ll arr[n];
         set<ll> st;
         for(int i = 0; i < n; i++)
         {
            cin >> arr[i];
            st.insert(arr[i]);
         }

         if(st.size() == 1)
         {
            cout<< -1 << "\n";
           // return;
           continue;
         }


         ll init = arr[0];
         ll cnt  = 0;
         ll ans = n;

         for(ll i = 0; i < n; i++)
         {
            if(arr[i] == init)
            {
                cnt ++;
            }
            else 
            {
                ans = min(ans, cnt);
                cnt = 0;
            }
         }

         ans = min(ans, cnt);
         cout<< ans << "\n";

    }
}

int32_t main() 
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    shakil_sol();

    return 0;
}

