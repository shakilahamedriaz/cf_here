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

bool isSorted(vector<int> &v)
{
    for(int i = 0; i < v.size() - 1; i++)
    {
        if(v[i] > v[i+1]) return false;
    }
    return true;
}
 
void shakil_sol() 
{
    int t;
    cin >> t;
    while(t--)
    {  
       int n;
       cin >> n; 
       vector<int> v(n);
       for(int i = 0; i < n; i++) cin >> v[i];
       

       for(int i = 0; i < n - 1; i++)
       {
           if(v[i] > v[i+1] && (v[i] - v[i+1] == 1))
           {
              swap(v[i], v[i+1]);
           }
       }

         if(isSorted(v)) cout << "YES" << endl;
         else cout << "NO" << endl;
    }  
}
 
int32_t main() 
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    shakil_sol();
    
    return 0;
}
