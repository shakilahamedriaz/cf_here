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

void shakil_sol() 
{
    int t;
    cin >>t;
    while(t--)
    {
              ll a , b, c;
              cin >> a >> b >> c;
              ll ans = a;
              ll r = b%3;

              if(r == 0)
              {
                        ans += b/3;
                        if(c%3 == 0) ans += c/3;
                        else ans += c/3+1;
                        cout<< ans << "\n";

              }

              else if(c >= 3-r)
              {
                        b += (3-r);
                        c -= (3-r);
                        ans += b/3;
                        if(c%3 == 0) ans += c/3;
                        else ans += c/3+1;
                        cout<< ans << "\n";
              }
              else cout<< "-1" << "\n";
    }

}


int32_t main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    shakil_sol();

    return 0;
}