#include <bits/stdc++.h>
using namespace std;

void sr_sol(int n, vector<long long>& arr) {
    
    long long ans = 0;
    ans+=arr[0]-1;
    
    for (int i = 1; i <n; i++) {
        if (arr[i] > arr[i - 1]) {
            ans += arr[i] - arr[i - 1];
        }
    }

    cout << ans << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        sr_sol(n, arr);
    }

    return 0;
}
