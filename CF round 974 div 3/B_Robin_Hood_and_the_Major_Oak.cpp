#include <iostream>
#include <vector>
using namespace std;

// Function to determine if the number of leaves in year n is even
bool isEvenLeavesInYearN(int n, int k) {
    // If k >= n, all leaves from year 1 to n are still on the tree
    if (k >= n) {
        return (n % 2 == 0);
    }
    // If k < n, we need to consider leaves from year (n - k + 1) to n
    return ((n - k + 1) % 2 == 0);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        if (isEvenLeavesInYearN(n, k)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}