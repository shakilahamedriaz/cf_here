#include <iostream>
#include <cmath>

using namespace std;

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        // Calculate the minimum number of operations of the first type needed
        int operations = ceil(static_cast<double>(n) / 3);
        cout << operations << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
