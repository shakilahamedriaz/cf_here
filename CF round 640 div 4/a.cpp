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

           int n;
           cin >> n;
           string s = to_string(n);
           int len = s.size();

           int cnt = 0;
           vector<int> v;

           for(int i = 0; i < len; i++)
           {
                if(s[i] != '0')
                {
                    cnt++;
                    //cout << s[i] << string(len - i - 1, '0') << " ";
                    v.push_back(stoi(s[i] + string(len - i - 1, '0')));
                }
                
            }

                cout<< cnt << "\n";
                for(auto x : v)
                {
                    cout << x << " ";

                }
                cout<< "\n";

                v.clear();
                cnt = 0;
                  
       }
}

int32_t main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    shakil_sol();

    return 0;
}