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
        string s;
        cin >> s;

        int x = 0, y = 0;  // Start position (0,0)
        bool found = false;

        for(int i = 0; i < 2 * n; i++)  // Simulate up to 2 * n moves
        {
            // Check if Alice meets the Red Queen
            if(x == a && y == b) 
            {
                found = true;
                cout << "YES" << endl;
                break;
            }

            // Move according to the current character in the sequence
            char move = s[i % n];  // Repeat the sequence
            if(move == 'N') y += 1;
            else if(move == 'E') x += 1;
            else if(move == 'S') y -= 1;
            else if(move == 'W') x -= 1;
        }

        // If Alice never meets the Red Queen, output "NO"
        if(!found) 
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
