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
    string s;
    cin >> s;
    
    int len = s.size();
    
    string modified = s;

    if(len == 1)  modified+= 'a'+1;
    
    for(int i = 0; i < len - 1; i++) 
    {
        if(s[i] == s[i + 1])
        {
            modified.insert(i + 1, 1, s[i] + 1);   // means s[i] + 1 is the next character of s[i]
                                           // and 1 is the number of times to insert that character
                                           // at the i + 1 position
            break;
        }
    }
    
    cout << modified << endl;
}

int32_t main() 
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0);

    int t;
    cin >> t;
    while(t--)
    {
        shakil_sol();
    }
   
    return 0;
}
