#include <iostream>
#include <string>

using namespace std;

void solve() {
    int n;
    cin >> n;
    
    string s;
    cin >> s;

    int ans = 0;
    int hash = 0;
    int dot = 0;

    int i = 0;
    while (i < n) {
        if (s[i] == '.' && hash == 1) {
            ans++;
            dot++;
        }

        if (dot >= 3) {
            ans = 2;
            break;
        }

        if (s[i] == '.' && hash == 0) {
            hash = 1;
            ans++;
            dot++;
        }

        if (hash == 1 && s[i] == '#') {
            dot = 0;
            hash = 0;
        }

        i++;
    }

    cout << ans << endl;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
