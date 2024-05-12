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
      cin >> t;
      while(t--)
      {
        
         ll n, c, d;
         cin >> n >> c >> d;
         
         ll arr[2*n];
         for(ll i=0; i<2*n; i++)
         {
             cin >> arr[i];
         }
         
         sort(arr, arr+(2*n));
         
         vector<ll> arrC;
         vector<ll> arrD;
        
        
        for(ll i=0; i<2*n; i+=2)
        {
            arrC.push_back(arr[i]);
        }
        for(ll i=1; i<2*n; i+=2)
        {
            arrD.push_back(arr[i]);
        }

       //  print arrC, and arrD
        for(ll i=0; i<arrC.size(); i++) 
        {
            cout << arrC[i] << " ";
        }
        cout << endl;
        for(ll i=0; i<arrD.size(); i++) 
        {
            cout << arrD[i] << " ";
        }
        cout << endl;


      }
   }

int32_t main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    shakil_sol();

    return 0;
}
