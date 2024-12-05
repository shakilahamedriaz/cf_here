#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx,avx2,fma")
#define ll long long
#define ld long double
#define PI 3.1415926535897932384626433832795
#define endl "\n"
 
int gcd(int a, int b) { if(a % b == 0) return b; else return gcd(b, a % b); }
int lcm(int a, int b) { return (a * b) / gcd(a, b); }
 

void shakil_sol() 
{
    int t; 
    cin >> t;

    while(t--)
    {
        ll n;
        cin >> n;
        bool check = false;
        string s = to_string(n);
        if(n % 9 == 0)
        {
            cout << "YES" << endl;
            continue;
        }

        for(char &c : s)
        {
            int x = c-'0';
            int sq = x*x;

            if(sq < 10)
            {
               c  =  sq + '0'; 
            }

            ll num = stoi(s); 
    
            if(num % 9 == 0)
            {
                check = true;
                break;
            }
        }

  
        if(check)
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

