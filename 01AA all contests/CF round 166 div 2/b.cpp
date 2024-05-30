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
    ll t;
    cin >>t;
    while(t--)
    {        
             ll n;
             cin >> n;

             ll arr[n];
             ll arr2[n+1];
             
             ll cnt = 0;

             for(ll i = 0; i < n; i++)
             {
                cin >> arr[i];
             }

             for(ll i = 0; i < n+1; i++)
             {
                 cin >> arr2[i];
             }

             
             bool check = false;
             for(ll i = 0; i < n; i++)
             {
                 if(arr2[n] == arr[i])
                 {
                    cnt += 1;
                    break;
                 }
                 else
                 {
                    check = true;
                 }
                 
             }

             if(check)
             {
                ll mostmin = INT_MAX;
                 for(ll i = 0; i < n; i++)
                 {
                     ll temp = abs(arr2[n] - arr[i]);
                     
                     mostmin = min(temp, mostmin);
                     
                 }
                 
                if(arr2[n] == mostmin)
                {
                    cnt  += mostmin ;
                } 
                else
                {   
                    cnt += abs(arr2[n] - mostmin) ;
                }
              
                 
             }
             

             for(ll i = 0; i < n; i++)
             {
                cnt += abs(arr[i] - arr2[i]);
             }



             cout<< cnt << "\n";

    }
}
int32_t main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    shakil_sol();

    return 0;
}