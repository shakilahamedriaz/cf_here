#include <bits/stdc++.h>
using namespace std;

// for optimizes GCC code
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx,avx2,fma")

#define ll long long
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

int gcd(int a, int b) {
    if(a % b == 0) return b;
    else return gcd(b, a % b);
}

int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

struct Runtime {
    clock_t start;
    Runtime() {
        start = clock();
    }
    ~Runtime() {
        cout << "Runtime: " << fixed << setprecision(3) << (double) (clock() - start) / CLOCKS_PER_SEC << "s\n";
    }
};

int sr2(int n, int a[]) {
    int right = -1, left = -1;

    for (int i = 0; i < n; i++) {
        if (a[i] == 1) {
            if (right == -1) {
                right = i;
            }
            left = i;
        }
    }
    int temp = 0;

    for (int i = right + 1; i < left; i++) {
        if (a[i] == 0) {
            temp++;
        }
    }

    return temp;
}

void solve() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int arr[n];

        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        cout << sr2(n, arr) << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    solve();

    return 0;
}
