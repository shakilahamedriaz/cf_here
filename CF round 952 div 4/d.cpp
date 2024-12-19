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
            char arr[n][m];
            
            vector<pair<int, int>> v;

            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < m; j++)
                {
                    cin >> arr[i][j];
                    if(arr[i][j] == '#')
                    {
                        v.push_back({i, j});
                    }
                }
            }

             int len = v.size();
            // cout<< len << "\n";

            if(len == 1)
            {
              
                cout<< v[0].first + 1 << " " << v[0].second + 1 << "\n";
            }
            else
            {
                len = (len/2) + 1;

                cout<< v[len - 1].first + 1 << " " << v[len - 1].second + 1 << "\n";
            }


    }
}


int32_t main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    shakil_sol();

    return 0;
}