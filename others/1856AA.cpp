//author : shakil Ahamed Riaz -(shakilswe)
//https://codeforces.com/problemset/problem/1856/A

#include <bits/stdc++.h>
using namespace std;

// for optimized GCC code
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx,avx2,fma")

#define ll long long
#define ld long double
#define ar array
#define sza(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()
#define PI 3.1415926535897932384626433832795l
#define pb(e) emplace_back(e)
#define fst first
#define snd second
#define pr pair<int, int>
#define mp make_pair
#define fl(i, a, n) for (int i = a; i < n; i++)
#define sqr(a) (a)*(a)
#define mod 1000000007
#define N "\n"

using namespace std;

int gcd(int a, int b) { if(a % b == 0) return b; else return gcd(b, a % b); }
int lcm(int a, int b) { return (a * b) / gcd(a, b); }

void sr_sol()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            arr.pb(x);
        }

        int mx = 0;
        for (int i = 1; i < n; i++)
        {
            if (arr[i] < arr[i - 1])
            {
                if (mx < arr[i - 1])
                {
                    mx = arr[i - 1];
                }
            }
        }

        cout << mx << N;
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    //sr_sol = shakil riaz's solution
    sr_sol();

    return 0;
}
