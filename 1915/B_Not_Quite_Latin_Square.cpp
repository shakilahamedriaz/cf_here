//author:Shakil Ahamed Riaz-(shakilswe)
//https://codeforces.com/contest/1915/problem/B
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

void sr_sol() {
    
    int t;
    cin >>t;
    while(t--)
    {
         //take an input 3*3 char matrix
            char arr[3][3];
            for(int i=0; i<3; i++)
            {
                for(int j=0; j<3; j++)
                {
                    cin >>arr[i][j];
                }
            }
         
         ll a=0,b=0,c=0;

          for(int i=0; i<3; i++)
          {
              for(int j=0; j<3; j++)
              {
                if(arr[i][j]== 'A')
                {
                    a++;
                }
                else if(arr[i][j]== 'B')
                {
                    b++;
                }
                else
                {
                    c++;
                }
              }
          }

        
            if(a<3)
            {
                cout<< "A"<<N;
            }
            else if(b<3)
            {
                cout<< "B"<<N;
            }
            else
            {
                cout<< "C"<<N;
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
