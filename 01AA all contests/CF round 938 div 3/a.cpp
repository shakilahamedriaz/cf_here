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
   int t; cin >> t;
   while(t--)
   {
      int n, a, b; cin >> n >> a >> b;
      
      if(n<=1) cout<< n*a <<endl;
      else if(n==2)
      {
           int k= n*a;
           if(k<b)
           {
             cout<<k<<endl;
           }
           else
           {
             cout<<b<<endl;
           }
      }
      else if(n>2)
      {
         double tempa=a;
         double tempb=b;
         tempb=tempb/2;

         if(tempa<tempb)
         {
            cout<<n*a<<endl;
         }
         else
         {
             if(n%2==0)
             {
                int p=n/2;
                cout<<p*b<<endl;
             }
             else
             {
                int p=n%2;
                int q=n-p;
                    q=q/2;

                    int ans=(q*b) + (p*a);
                    cout<<ans<<endl;
             }
         }

      }

   }
}
int32_t main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    shakil_sol();

    return 0;
}
