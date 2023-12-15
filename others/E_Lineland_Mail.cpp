#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> cities(n);
    for (int i = 0; i < n; ++i) {
        cin >> cities[i];
    }

    for (int i = 0; i < n; ++i) {
        int mini = INT_MAX;
        int maxi = 0;

        if (i > 0) {
            mini = min(mini,abs(cities[i] - cities[i - 1]));
        }
        if (i < n - 1) {
            mini = min(mini, abs(cities[i + 1] - cities[i]));
        }

    
        maxi = max(abs(cities[i] - cities[0]), abs(cities[i] - cities[n - 1]));
        

          cout << mini << " " << maxi << endl;
    }

    return 0;
}
