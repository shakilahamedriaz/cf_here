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

bool isPrime(int n)
{
    if(n==1) return false;
    for(int i=2; i*i<=n; i++)
    {
        if(n%i==0) return false;
    }
    return true;
}

void shakil_sol() 
{
    int t; 
    cin >> t;
    while( t-- )
    {

         int n;
         cin >> n;
         vector<int> ans(n);

         /*Construct a permutation∗
 p
 of length n
 such that pi+pi+1
 is composite†
 over all 1≤i≤n−1
. If it's not possible, output −1
.*/

            for(int i=0; i<n; i++)
            {
                ans[i]=i+1;
            }
    
            for(int i=0; i<n-1; i++)
            {
                if(isPrime(ans[i]+ans[i+1]))
                {
                    swap(ans[i], ans[i+1]);
                }
            }
    
            for(int i=0; i<n; i++)
            {
                cout<<ans[i]<<" ";
            }
            cout<<endl;
 
    }

}
int32_t main() 
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    shakil_sol();
    
    return 0;
}
