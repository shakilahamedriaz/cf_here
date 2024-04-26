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

void shakil_sol() {
    
    int t;
    cin >>t;
    while(t--)
    {
       ll n, cnt=0, total=0;
       cin >>n;

       ll Arange= INT_MIN, Brange= INT_MAX;
       vector<ll> v;
       
       while(n--)
       {
           ll a, x;
           cin >>a >>x;

           if(a==1)
           {
              Arange=max(x, Arange);
           }
           else if(a==2)
           {
              Brange=min(Brange, x);
           }

           else 
           {
             
              v.push_back(x);
           }

       }
       
       sort(v.begin(), v.end());

       for(auto num: v)
       {
         if(num>=Arange && num<=Brange)
         {
            cnt++;
         }
       }


       total= Brange - Arange +1;
       total-=cnt;
    

       if(total<=0) cout<< "0" <<endl;
       else cout<< total <<endl;

 

    }
}

int32_t main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    shakil_sol();

    return 0;
}
