#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx,avx2,fma")
#define ll long long
#define endl "\n"

void shakil_sol() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        // Calculate the total sum of the array
        ll sum = accumulate(a.begin(), a.end(), 0LL);

        // If the total sum is not divisible by n, it's impossible to make all elements equal
        if (sum % n != 0) {
            cout << "NO" << endl;
            continue;
        }

        // Calculate the target value each element should be
        ll target = sum / n;

        // To ensure all elements become equal, the operations should not make any element negative
        bool possible = true;
        for (int i = 1; i < n - 1; ++i) {
            if (a[i] < target) {
                // We need to decrease a[i-1] and increase a[i+1] which might make a[i-1] negative
                ll diff = target - a[i];
                if (a[i - 1] < diff || a[i + 1] < diff) {
                    possible = false;
                    break;
                }
            }
        }

        // If any condition is violated, it's not possible
        cout << (possible ? "YES" : "NO") << endl;
    }
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0);

    shakil_sol();

    return 0;
}
