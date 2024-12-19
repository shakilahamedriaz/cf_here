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
    int t;
    cin >> t;
    while( t-- )
    {
         int a1, a2, b1, b2;
         cin >> a1 >> a2 >> b1 >> b2;

         int cnt = 0;

         if(a1 > b1)
         {
            cnt += 1;
         }
         if(a1 > b2)
         {
            cnt += 1;
         }

         if(a2 > b1)
         {
            cnt += 1;
         }
         if(a2 > b2)
         {
            cnt += 1;
         }
         if(b1 > a1)
         {
            cnt -= 1;
         }
         if(b1 > a2)
         {
            cnt -= 1;
         }
         if(b2 > a1)
         {
            cnt -= 1;
         }
         if(b2 > a2)
         {
            cnt -= 1;
         }


         if(cnt < 0)
         {
            cnt = 0;
         }
        
         cout<< cnt << endl;
    }
    
}

int32_t main() 
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    shakil_sol();

    return 0;
}

