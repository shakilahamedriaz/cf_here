//author:Shakil Ahamed Riaz-(shakilswe)
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

struct Runtime {
    clock_t start;
    Runtime() {
        start = clock();
    }
    ~Runtime() {
        cout << "Runtime: " << fixed << setprecision(3) << (double) (clock() - start) / CLOCKS_PER_SEC << "s\n";
    }
};

void sr_sol() {
    
    ll t;
    cin >>t;
    while(t--)
    {
       ll a, b, l;
       cin >>a>>b>>l;

       int arr[2];

       arr[0] = a;
       arr[1] = b;
       
       if(l%a !=0  || l%b !=0)
       {
           cout<<"1"<<N;
       }
       
       else
       {
  
        map<ll, ll> mp;

       for(int i=0; i<2; i++)
       {
         if(l%arr[i]==0)
         {
            while(l%arr[i]==0)
            {
                l/=arr[i];

                mp[arr[i]]++;
            }
           }
         }
            
            if(l>1)
            {
                mp[l]++;
            }
            
            ll ans=1;
            for(auto x: mp)
            {
                ans*=(x.second+1);
            }
            
            cout<<ans<<N;
             
       }

       
    }
}

int32_t main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    //sr_sol(): shakil_riaz's solution  
    sr_sol();

    return 0;
}
