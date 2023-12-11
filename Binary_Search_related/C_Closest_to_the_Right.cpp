#include <iostream>
#include <vector>
using namespace std;

#define ll long long

ll binary_search(vector<ll>& arr, ll query)
{

    ll left = 0, right = arr.size(), ans = arr.size() + 1;

    while (left < right) {
        ll mid = left + (right - left) / 2;

        if (arr[mid] >= query) {
            ans = mid + 1;
            right = mid;
        } else {
            left = mid + 1;
        }
    }

    return ans;
}

int main() {
    ll n, k;
    cin >> n >> k;

    vector<ll> arr(n);
    for (ll i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (ll i = 0; i < k; i++) {
        ll query;
        cin >> query;

        ll ans = binary_search(arr, query);
        cout << ans << endl;
    }

    return 0;
}
