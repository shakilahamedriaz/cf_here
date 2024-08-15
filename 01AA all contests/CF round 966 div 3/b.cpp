#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx,avx2,fma")
#define ll long long
#define ld long double
#define PI 3.1415926535897932384626433832795

void shakil_sol() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) 
        {
            cin >> v[i];
        }

        bool check = true;
        set<int> oc;
        oc.insert(v[0]); 

        for (int i = 1; i < n; i++) 
        {

            if (oc.find(v[i] - 1) != oc.end() || oc.find(v[i] + 1) != oc.end()) 
            {
                oc.insert(v[i]);
            }
            else 
            {
                check = false;
                break;
            }
        }

        if (check) 
        {
            cout << "YES" << "\n";
        } 
        else 
        {
            cout << "NO" << "\n";
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
