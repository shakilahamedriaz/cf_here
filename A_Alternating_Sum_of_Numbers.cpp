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
    int n;
    cin >> n;
    int a[n];
 
    int minus = 0, plus = 0;

    for(int i = 1; i <= n; i++)
    {
       cin >> a[i];

    }

    for(int i = 1; i<= n; i++)
    {
        if(i%2 == 0)
        {
            minus+= a[i];
        }
        else
        {
            plus+= a[i];
        }
    }

    cout<< plus - minus << "\n";

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

