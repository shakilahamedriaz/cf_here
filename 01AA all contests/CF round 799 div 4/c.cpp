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
           
           char arr[8][8];
           for(int i = 0; i < 8; i++)
           {
             for(int j = 0; j < 8;  j++)
              {
                    cin >> arr[i][j];
              }
           }
            
            int ans1 = -1 , ans2 = -1;

            for(int i = 0; i< 8; i ++)
            {
              for(int j = 0; j <  8;  j++)
                {
                    if(arr[i][j] == '#' && arr[i-1][j-1] == '#' && arr[i-1][j+1] == '#' && arr[i+1][j-1] == '#' && arr[i+1][j+1] == '#')
                    {
                        ans1= i;
                        ans2 = j;
                        
                    }
                }

               // if(ans1 != -1 && ans2 != -1) break;
            }
   

            cout<< ans1+1 << " "<< ans2+1 << "\n";

    }
}


int32_t main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    shakil_sol();

    return 0;
}