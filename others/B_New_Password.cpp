#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
        cin >> n >> k;

    vector<char> password;
    char current_char = 'a';

    for (int i = 0; i < n; ++i) {
        password.push_back(current_char);
        current_char = (current_char - 'a' + 1) % k + 'a';
    }

    for (char ch : password) {
        cout << ch;
    }

    cout <<endl;

    return 0;
}
