#include<bits/stdc++.h>
using namespace std;
#define ll long long

void binary_search(vector<ll>& arr, ll left, ll right, ll& ans_left, ll& ans_right)
{
    ans_left = lower_bound(arr.begin(), arr.end(), left) - arr.begin(); 
    
    ans_right = upper_bound(arr.begin(), arr.end(), right) - arr.begin() - 1;
}

int main() {
    ll n, k;
    cin >> n;

    vector<ll> arr(n);
    for (ll i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());

    cin >> k;
    while (k--) {
        ll left, right;
        cin >> left >> right;

        ll ans_left, ans_right;
        binary_search(arr, left, right, ans_left, ans_right);

        
        ll ans = ans_right - ans_left + 1;
        cout << ans << " ";
    }

    return 0;
}
