#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx,avx2,fma")
#define ll long long
#define ld long double
#define PI 3.1415926535897932384626433832795

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

void shakil_sol() 
{
    int t;
    cin >> t;
    while( t-- )
    {
        int n, k;
        cin >> n >> k;
        char grid[n][n];
        set<int> st;
        int x = n / k;
        
    
        

        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                cin >> grid[i][j];
                st.insert(grid[i][j]);
            }
        }

        if(st.size() == 1)
        {
            for(int i = 0; i < x; i++)
            {
                for(int j = 0; j < x; j++)
                {
                    cout << grid[0][0];
                }
                cout << '\n';
            }
        }
        else
        {
            for(int i = 0; i < n; i+=k)
            {
                for(int j = 0; j < n; j+=k)
                {
                    cout << grid[i][j];
                }
                cout << '\n';
            }
        
        }


    }
    
}

int32_t main() 
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    shakil_sol();

    return 0;
}

