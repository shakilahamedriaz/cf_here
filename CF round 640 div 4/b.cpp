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

bool checkEven(ll n, ll k)
{
            ll rem = n - 2*k;

            if(rem < 0) return 0;
            if(rem & 1) return 0;

            else
              {
                 cout << "YES" << "\n";
                 for(int i = 0; i < k-1; i++)
                 {
                    cout<< 2 << " ";
                 }
                    cout<< rem + 2 <<  "\n";
              }

              return 1;
}

bool checkOdd(ll n, ll k)
{

      ll rem = n - k;

      if(rem < 0) return 0;
      if(rem & 1) return 0;

      else
        {
           cout << "YES" << "\n";
           for(int i = 0; i < k-1; i++)
           {
              cout<< 1 << " ";
           }
              cout<< rem + 1 <<  "\n";
        }

        return 1;
}
void shakil_sol() 
{
    int t;
    cin >> t;
    while (t--) 
    {        
           ll n, k;
           cin >> n >> k;

           if(checkEven(n, k) || checkOdd(n, k))
           {
               continue;
           }
           else
           {
               cout << "NO" << "\n";

           }

    }
}


int32_t main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    shakil_sol();

    return 0;
}