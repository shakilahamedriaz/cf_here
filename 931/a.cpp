#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        // Calculate the maximum value of the expression
        int max_value = 0;
        for (int i = 0; i < n - 3; ++i) {
            max_value = max(max_value, a[i + 3] - a[i]);
        }

        cout << max_value << endl;
    }

    return 0;
}
