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
    int t;
    cin >> t;
    while (t--) 
    {        
          string s;
          cin >> s;
          ll len = s.size();
          ll sum, index = -1;

          for(int i = len-1; i >=0; i--)
          {
               sum = (s[i] - '0') + (s[i - 1] - '0');
               if(sum > 9)
               {
                  index = i;
                  break;
               }

          }

          if(index == -1)
          {
                    cout<< (s[0] - '0') + (s[1] - '0');
                    for(int i = 2; i < len-1; i++)
                    {
                        cout<< s[i];
                    }
                    cout<< "\n";
          }
         
          
          if(index != -1)
          {
                    for(int i = 0; i < index-1; i++)
                    {
                        cout<< s[i];
                    }
                    cout<< sum ;
                    for(int i = index + 1; i < len-1; i++)
                    {
                       cout<< s[i];
                    }
                    cout<< "\n";
                    continue;
          }
      


    }
}


int32_t main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    shakil_sol();

    return 0;
}