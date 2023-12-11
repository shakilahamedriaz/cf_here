#include <bits/stdc++.h>
using namespace std;
#define ll long long int


void sr_sol(string s, int n) {
    vector<int> capital, small;
    vector<bool> truekina(n, true);

    for (int i = 0; i < n; i++) {
        if (s[i] == 'b') {
            if (!small.empty()) {
                truekina[small.back()] = false;
                small.pop_back();
            }
            truekina[i] = false;
        } else if (s[i] == 'B') {
            if (!capital.empty()) {
                truekina[capital.back()] = false;
                capital.pop_back();
            }
            truekina[i] = false;
        } else if (s[i] >= 'A' and s[i] <= 'Z') {
            capital.push_back(i);
        } else {
            small.push_back(i);
        }
    }

    for (int i = 0; i < n; i++) {
        if (truekina[i]) {
            cout << s[i];
        }
    }
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int n = s.size();
        sr_sol(s, n);
    }
    return 0;
}
