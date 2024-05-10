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
   int t; cin >>t;
   while(t--)
   { 
      string s;
      cin >>s;
      string k=s;

      sort(s.begin(), s.end());
      if(s==k) cout<< "1"<<endl;
      else if(s.size()==2  &&  (s[0]=='0' && s[1]=='1') || (s[0]=='1' && s[1]=='0'))
      {
        cout<< "2" <<endl;
      }
      else
      { 
          int cnt=0;
          for(int i=0; i<s.size()-1; i++)
          {
             if(s[i]=='0' && s[i+1] =='1') cnt++;
          }

           cout<< s.size() - cnt<<endl;
         }

         
      }

   }

int32_t main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    shakil_sol();

    return 0;
}
