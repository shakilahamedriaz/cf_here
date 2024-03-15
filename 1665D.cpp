#include <bits/stdc++.h>
using namespace std;

#define ll long long

void allDivisor(ll n, ll arr[], ll totalnumber) {
    set<ll> div;
    ll div_cnt = 0;

    for (ll i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            div.insert(i);
            if (n / i != i) {
                div.insert(n / i);
            }
        }
    }

    if (totalnumber <= div.size()) {
        for (ll i = 0; i < totalnumber; i++) {
            if (div.find(arr[i]) != div.end()) {
                div_cnt++;
            }
        }
        if (div_cnt == totalnumber) {
            cout << n << "\n";
        } else {
            cout << -1 << "\n";
        }
    } else {
        cout << -1 << "\n";
    }
}

void sr_sol() {
    ll t;
    cin >> t;

    while (t--) {
        ll n;
        cin >> n;

        ll arr[n];
        for (ll i = 0; i < n; i++) {
            cin >> arr[i];
        }
        sort(arr, arr + n);

        if (n == 1) {
            cout << arr[0] * arr[0] << "\n";
        } else {
            ll canBeAns = arr[0] * arr[n - 1];
            allDivisor(canBeAns, arr, n);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    sr_sol();

    return 0;
}
