//author: Shakil Ahamed Riaz-(shakilswe)
#include <bits/stdc++.h>
using namespace std;

//for optimized GCC code
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx,avx2,fma")

#define ll long long
#define mod 1000000007
#define N "\n"

using namespace std;

struct Runtime {
    clock_t start;
    Runtime() {
        start = clock();
    }
    ~Runtime() {
        cout << "Runtime: " << fixed << setprecision(3) << (double) (clock() - start) / CLOCKS_PER_SEC << "s\n";
    }
};

// precompute
vector<ll> vr(200005);

int sum_of_digits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

void sr_sol() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        ll sum = 0;
        for (ll i = 1; i <= n; ++i) {
            sum += sum_of_digits(i);
        }

        cout << sum << N;
    }
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    // sr_sol(): Shakil Ahamed Riaz's solution
    sr_sol();

    return 0;
}
