//author:Shakil Ahamed Riaz-(shakilswe)
//https://codeforces.com/contest/1921/problem/B
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

int Operations(string & first, string& second, ll n)
 {
    ll initCnt=0, finCnt=0;

   for(int i=0; i<n; i++)
   {
      if(first[i]== '1' && second[i]=='1')
      {
          continue;
      }
      else if(first[i]=='1' && second[i]=='0')
      {
        initCnt++;
      }
   }

   for(int i=0; i<n; i++)
   {
      if(second[i]== '1' && first[i]=='1')
      {
          continue;
      }
      else if(second[i]=='1' && first[i]=='0')
      {
         finCnt++;
      }
   }   

  

   ll minCnt=min(initCnt, finCnt);
   ll diff= abs(initCnt-finCnt);
   
   ll dorja= minCnt+diff;

   return dorja;
}

void sr_sol()
{
    
    int t;
    cin >>t;
    while(t--)
    {
       ll n;
       cin >> n;
        
       string first, second;
       cin >>first >>second;

       int ans= Operations(first, second, n);

       cout<<ans<<N;  

    }
}

int32_t main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    //sr_sol(): shakil_riaz's solution  
    sr_sol();
    
    return 0;
}
