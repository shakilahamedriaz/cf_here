#include <iostream>
#include <string>

using namespace std;

int sr_sol(string s) {
    int len=s.length();
    int ans = 0;
    int i = 0;
    int j = 0;

    for (i = 0; i <len - 1; i++) {
        if (s.substr(i, 2) == "AB") {
            ans++;
            s[i] = 'B';
            s[i + 1] = 'A';

            for (int k = i - 1; k >= j; k--) {
                if (s.substr(k, 2) == "AB") {
                    ans++;
                    s[k] = 'B';
                    s[k + 1] = 'A';
                }
            }
            j = i + 1;
        }
    }
    return ans;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        int result = sr_sol(s);
        cout << result << endl;
    }

    return 0;
}
