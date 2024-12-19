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

// bool isSorted(vector<int> &v)
// {
//     for(int i = 0; i < v.size() - 1; i++)
//     {
//         if(v[i] > v[i+1]) return false;
//     }
//     return true;
// }
 
void shakil_sol() 
{
    int t;
    cin >> t;
    while(t--)
    {  
        int n;
        cin >> n;
        vector<ll> perfectSq;
        
        if(n%2 !=0)
        {
            cout << "-1" << endl;
            continue ;
        }
        
        for(int i = 1; i <= n; i++)
        {
            int rt = sqrt(i);
            
            if(rt * rt == i)
            {
                perfectSq.push_back(i);
            }
        }

        for(auto u : perfectSq)
        {
            cout << u << " ";
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
