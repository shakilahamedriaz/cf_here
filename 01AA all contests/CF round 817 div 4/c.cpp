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
    cin >>t;
    while(t--)
    {        
                                    int n;
                                    cin >> n;
                                    string a[3][n];
                                    map<string, int> mp;

                                    for(int i = 0; i < 3; i++)
                                    {
                                        for(int j = 0; j < n; j++)
                                        {
                                            cin >> a[i][j];
                                            mp[a[i][j]]++;
                                        }
                                    }

                                    // for(auto it: mp)
                                    // {
                                    //     cout<< it.first << " " << it.second << "\n";
                                    // }
                                    // cout<<endl;

                                    int ans[3] = {0};
                                    for(int i = 0; i < 3; i++)
                                    {
                                        for(int j = 0; j < n; j++)
                                        {
                                        if(mp[a[i][j]] == 1)
                                        {
                                                ans[i] += 3;
                                        }
                                        else if(mp[a[i][j]] == 2)
                                        {
                                                ans[i] += 1;
                                        }
                                        
                                        }
                                    }

                                    cout<< ans[0] << " " << ans[1] << " " << ans[2] << "\n";

    }

}
int32_t main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    shakil_sol();

    return 0;
}