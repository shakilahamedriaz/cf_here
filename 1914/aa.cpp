#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx,avx2,fma")
#define ll long long
#define ld long double
#define PI 3.1415926535897932384626433832795
 
int gcd(int a, int b) { if(a % b == 0) return b; else return gcd(b, a % b); }
int lcm(int a, int b) { return (a * b) / gcd(a, b); }
 
void shakil_sol() 
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, a, b;
        cin >> n >> a >> b;
        string str;
        cin >> str;

    
        string s = "";
        for(int i = 0; i < 10 * 10 + 10; i++)
        {
            s += str;
        }

        int x = 0, y = 0; 
        bool ok = false;

     
        for(int i = 0; i < s.size(); i++)
        {
          
            if(s[i] == 'N') y += 1;
            if(s[i] == 'E') x += 1;
            if(s[i] == 'S') y -= 1;
            if(s[i] == 'W') x -= 1;

        
            if(x == a && y == b)
            {
                ok = true;
                break;
            }
        }
        
     
        if(ok)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
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
