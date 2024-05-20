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
               int x, y; 
               cin >> x >> y;

                int need2x2 = y / 2 + (y % 2);
                int reserved = 7 * (y / 2);
                int need1x1 = x;

                if (y % 2 == 1)
                {
                  reserved += 11;
                }

                int add = 0;
                if (reserved < x) 
                {
                  int temp = x - reserved;
                  int extra = temp % 15;
                  int sets = temp / 15;
                 if (extra > 0)
                  {
                   sets += 1;
                  }
                    add = sets;
                 }

                cout << need2x2 + add << endl;

    }

}
int32_t main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    shakil_sol();

    return 0;
}