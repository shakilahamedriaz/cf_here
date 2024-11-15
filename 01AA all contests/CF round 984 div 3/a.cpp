#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx,avx2,fma")
#define ll long long
#define ld long double
#define PI 3.1415926535897932384626433832795
#define endl "\n"
 
int gcd(int a, int b) { if(a % b == 0) return b; else return gcd(b, a % b); }
int lcm(int a, int b) { return (a * b) / gcd(a, b); }
 
void shakil_sol() 
{
  int t;
  cin >> t;
  while( t-- )
  {
      int n;
      cin >> n;
      int arr[n];
      for(int i = 0; i < n; i++) cin >> arr[i];
      
      bool check = true;
      for(int i  = 1; i < n; i++)
      {
          int c = abs(arr[i] - arr[i-1]);
          if(c != 5 && c != 7 )
          {
              check = false;
              break;
          }
      }
      
        check ? cout << "YES" << endl: cout << "NO" << endl;

  }
 
}
 
int32_t main() 
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    shakil_sol();
    
    return 0;
}
