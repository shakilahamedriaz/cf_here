#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx,avx2,fma")
#define ll long long
#define ld long double
#define PI 3.1415926535897932384626433832795
using namespace std;

int gcd(int a, int b) { if(a % b == 0) return b; else return gcd(b, a % b); }
int lcm(int a, int b) { return (a * b) / gcd(a, b); }

struct Runtime 
{
    clock_t start;
    Runtime() {
        start = clock();
    }
    ~Runtime() {
        cout << "Runtime: " << fixed << setprecision(3) << (double) (clock() - start) / CLOCKS_PER_SEC << "s\n";
    }
};

ll arr[1000000] , prefixSum[1000000];

void shakil_sol() 
{
    int t;
    cin >>t;
    while(t--)
    {        
            int n, q;
            cin >> n >> q;
            for(int i = 1; i <= n; i++) cin >> arr[i];


            for(int i = 1; i <= n; i++)
            {
                prefixSum[i] = prefixSum[i-1] + arr[i];
            }

            while(q--)
            {
                    ll l, r, k;
                    cin >> l >> r >> k;
                    ll kSum = ((r-l)+1) * k;

                    ll ans = (prefixSum[n] - (prefixSum[r] - prefixSum[l-1])) + kSum;

                    if(ans % 2 == 1) 
                    {
                         cout << "YES" << "\n";
                    }
                    else
                    {
                         cout<< "NO" << "\n";
                    }


            }


    }

}
int32_t main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    shakil_sol();

    return 0;
}