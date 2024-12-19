//https://codeforces.com/contest/1927/problem/B
#include <bits/stdc++.h>
using namespace std;

//for optimizes GCC code
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx,avx2,fma")

#define ll long long
#define ld long double
#define ar array
#define sza(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()
#define PI 3.1415926535897932384626433832795l
#define pb(e) push_back(e)
#define fst first
#define snd second
#define pr pair<int, int>
#define mp make_pair
#define flp(i, a, b) for(int i = a; i <= b; i++)
#define sqr(a) (a)*(a)
#define mod 1000000007
#define N "\n"

using namespace std;

int gcd(int a, int b) { if(a % b == 0) return b; else return gcd(b, a % b); }
int lcm(int a, int b) { return (a * b) / gcd(a, b); }

void sr_sol()
{
    int t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;

        string a;

        vector<ll> arr(n);
        vector<ll> hhh(26);

        for(ll i=0; i<n; i++)
        {
           cin>>arr[i];
        }

        for(ll i=0; i<n; i++)
        {
            for(char j='y'; j>='a'; j--)
            {
                if(hhh[j-97] == arr[i])
                {
                    hhh[j -97]++;
                    a += j; break;
                }
            }
        }

        cout <<a<< N;
    }
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    //sr_sol(): shakil_riaz's solution  
    sr_sol();
    
    return 0;
}
