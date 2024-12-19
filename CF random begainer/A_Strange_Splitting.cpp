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
         ll n;
         cin >> n;
         ll arr[n];
         for(ll i=0; i<n; i++)  cin >> arr[i];
    
         if(arr[0] == arr[n-1])  //though the array is sorted
         {
            cout<< "NO" << '\n';
         }
         else
         {
                    cout<< "YES" << '\n';
                    
                    if(arr[1] == arr[n-1]) 
                    {
                        cout<< "BB" ;
                        for(int i = 2; i < n; i++)
                        {
                            cout<< "R";
                        }
                    }
                    else
                    {
                        cout<< "B";
                        for(int i = 1; i< n; i++)
                        {
                            cout<< "R";
                        }
                    }

                    cout<< '\n';
         }
         

    }
}

int32_t main() 
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    shakil_sol();

    return 0;
}

