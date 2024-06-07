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

            int n, f, k;
            cin >> n >>f >> k;
            
            vector< int > v(n);
            for(int i = 1; i <= n; i++)
            {
                cin >> v[i];
            }

            int fav = v[f];
            reverse(v.begin(), v.end());
            v.erase(v.begin(), v.begin() + k);

            bool a = false, b = false;
            if(find(v.begin(), v.end(), fav) != v.end())
            {
                a = true;
            }
            else
            {
                b = true;
            }


            if(a == true && b == false)
            {
                cout << "MAYBE" << endl;
            }
            else if(a == true || b == true)
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
            }


    }

}
int32_t main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    shakil_sol();

    return 0;
}