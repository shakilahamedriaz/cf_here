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

        string s;
        cin >> s;
        int len = s.size();
        int a, b, c, d;

        a = stoi(s.substr(0, 1));
        b = stoi(s.substr(1, 1));
        c = stoi(s.substr(2, 1));
        d = stoi(s.substr(3, 1));

        if( a == 0) a = 10;
        if( b == 0) b = 10;
        if( c == 0) c = 10;
        if( d == 0) d = 10;

        int s1 = abs(1 - a);
        int s2 = abs(a - b);
        int s3 = abs(b - c);
        int s4 = abs(c - d);

        int sum = 4 + (s1 + s2 + s3 + s4);

        cout<< sum << "\n";


    }

}
int32_t main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    shakil_sol();

    return 0;
}