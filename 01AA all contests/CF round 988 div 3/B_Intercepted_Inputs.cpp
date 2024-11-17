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
        int k; cin >> k;
        vector<int> v;
        for(int i = 0; i < k; i++)
        {
            int x; cin >> x;
            v.push_back(x);
        }

        int len = k -2;
        int mn = v[0];
        int temp =len;

        vector<int> ans;

        for(int i = 0; i < k;  i++)
        {
            if(temp % v[i] == 0)
            {
                ans.push_back(v[i]);
            }
        }
        sort(ans.begin(), ans.end());
        int x, y;
        
 
        vector<pair<int,int> > p;
        for(int i = 1; i*i <= temp; i++)
        {
            if(temp % i == 0)
            {
                // p.push_back(i);
                // p.push_back(temp/i);
                p.push_back({i, temp/i});
            }
        }

 


        // check any tow pair of p is equal to ans with optimally in O(n)
        

 

        cout << x << " " << y << endl;
  
    }

}
int32_t main() 
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    shakil_sol();
    
    return 0;
}
