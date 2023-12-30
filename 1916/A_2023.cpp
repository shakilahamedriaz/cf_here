//author:Shakil Ahamed Riaz-(shakilswe)
//https://codeforces.com/contest/1916/problem/A
#include <bits/stdc++.h>
using namespace std;

//for optimizes GCC code
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx,avx2,fma")

#define ll long long
#define ld long double
#define ar array
#define sza(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()
#define PI 3.1415926535897932384626433832795l
#define pb(e) push_back(e)
#define fst first
#define snd second
#define pr pair<int, int>
#define mp make_pair
#define flp(i, a, b) for(int i = a; i <= b; i++)
#define sqr(a) (a)*(a)
#define mod 1000000007
#define N "\n"

using namespace std;

int gcd(int a, int b) { if(a % b == 0) return b; else return gcd(b, a % b); }
int lcm(int a, int b) { return (a * b) / gcd(a, b); }

void sr_sol() {
    int t;
    cin >> t;

    while (t--) {
      int n, k;
    cin >> n >> k;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int div23[10] = {1, 7, 17, 119, 289, 2023};

    int sum = 1;
    for (int i = 0; i < n; i++) {
        sum *= arr[i];
    }

    if (sum == 2023) {
        cout << "YES"<<N;

        
        for (int i =1; i <=k; i++) {
            cout << "1 ";
        }
        cout <<N;
    } else {
        bool found = false;
        vector<int> v;

        for (int j = 0; j < 6; j++) {
            if (sum * div23[j] == 2023) {
                v.push_back(div23[j]);
                found = true;
                break;
            }
        }

        if (found) {
            cout << "YES" <<N;
            for (int i = 0; i < v.size(); i++) {
                cout << v[i] << " ";
            }

            for (int i = 0; i < k - v.size(); i++) {
                cout << "1 ";
            }
            cout <<N;
        } else {
            cout << "NO" <<N;
        }
     }
    }
}


int32_t main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    //sr_sol(): shakil_riaz's solution  
    sr_sol();

    return 0;
}
