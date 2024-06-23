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
         int n, m;
         cin >> n >> m;
         ll arr[n][m];

         for(int i = 1; i <=n; i++)
         {
            for(int j = 1; j <=m; j++)
            {
                cin >> arr[i][j];
            }
         }

         for(int i = 1; i <=n; i++)
         {
            for(int j = 1; j <=m; j++)
            {
                if(n == 1)
                {
                    if(arr[i][j] > arr[i][j+1])
                    {
                        arr[i][j] -= 1;
                    }
                    else 
                    {
                        arr[i][j+1] -=1;
                    }
                }
                if(m  == 1)
                {
                    if(arr[i][j] > arr[i+1][j])
                    {
                        arr[i][j] -=1;
                    }
                    else
                    {
                        arr[i+1][j] -=1;
                    }
                }
            }
         }

         //output
         for(int i = 1; i <=n; i++)
         {
            for(int j = 1; j <=m; j++)
            {
                cout<< arr[i][j] << " ";
            }
            cout<< '\n';
         }         
         cout<< "\n";



    }
}


int32_t main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    shakil_sol();

    return 0;
}