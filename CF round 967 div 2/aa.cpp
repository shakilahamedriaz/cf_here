#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    unordered_map<int, int> freqMap;

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        freqMap[a[i]]++;
    }

    int maxFrequency = 0;
    for (const auto& entry : freqMap) {
        if (entry.second > maxFrequency) {
            maxFrequency = entry.second;
        }
    }

    cout << "Most occurrence count: " << maxFrequency << "\n";

    return 0;
}
