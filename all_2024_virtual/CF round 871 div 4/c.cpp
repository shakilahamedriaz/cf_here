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
             vector<int> both, v1, v2;
             
            
             while(n--)
             {
                int x;
                string s;
                cin >> x >> s;

                if(s == "11")  both.push_back(x);
                if(s == "10")  v1.push_back(x);
                if(s == "01")  v2.push_back(x);
   
             }
             
                sort(both.begin(), both.end());
                sort(v1.begin(), v1.end());
                sort(v2.begin(), v2.end());

                int mostmin = INT_MAX;

                 if(!both.empty())  mostmin = min(mostmin, both[0]);
                 if(!v1.empty() && !v2.empty()) mostmin = min(mostmin, v1[0] + v2[0]);
                 
                 
                 if(mostmin == INT_MAX) cout<< "-1" << "\n";
                 else cout<< mostmin << "\n";

                //sove this problem by reading some articles, or by reading the editorial


    }

}
int32_t main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    shakil_sol();

    return 0;
}