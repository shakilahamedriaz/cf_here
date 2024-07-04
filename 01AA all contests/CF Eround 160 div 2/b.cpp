#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int n = s.length();
        bool found = false;
        
        for (int i = 1; i < n; ++i) {
            string a = s.substr(0, i);
            string b = s.substr(i);
            
            // Check if neither part has a leading zero
            if ((a[0] != '0' && b[0] != '0') && (stoll(a) > 0 && stoll(b) > 0)) {
                if (stoll(a) < stoll(b)) {
                    cout << a << " " << b << "\n";
                    found = true;
                    break;
                }
            }
        }
        if (!found) {
            cout << "-1\n";
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}
