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
         int n, m;
         cin >> n >> m;
         vector< ll > v(n);
         vector < ll > ans;
         string s;
         ll product = 1;

         for(int i = 0; i < n; i++)
         {
           cin >> v[i];
           product *= v[i];
         }

         cin >> s;

         ll p = product % m;
         cout<< p << " ";

         for(int i = 0; i < n; i++)
         {
            if(s[i] == 'L')
            {
                v.erase(v.begin());

            }
            else if(s[i] == 'R')
            {
                v.erase(v.end() - 1); // -1  because end() is the next position of the last element
            }
            if(v.empty()) break;

            ll product2 = 1;
            for(int i = 0; i < v.size(); i++)
            {
                product2 *= v[i];
            }

            ll p2 = product2 % m;
            ans.push_back(p2);

         }

         for( auto x : ans)
         {
             cout<< x << ' ';
         }
         cout<< '\n';
         
         v.clear();
         ans.clear();
         product = 1;


    }
}

int32_t main() 
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    shakil_sol();

    return 0;
}

