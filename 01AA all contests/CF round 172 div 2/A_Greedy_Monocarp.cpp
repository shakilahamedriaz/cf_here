#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t; // Number of test cases
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> a(n);
        int current_sum = 0;

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            current_sum += a[i];
        }

        // Sort the array in descending order to pick largest elements first
        sort(a.rbegin(), a.rend());

        int coins_to_add = max(0, k - current_sum); // Minimum coins to make total >= k
        int current_total = 0; // Track the total Monocarp has taken
        int chests_taken = 0;

        // Pick coins greedily from the largest to smallest
        for (int i = 0; i < n; ++i) {
            current_total += a[i];
            chests_taken++;

            if (current_total >= k) {
                break; // Monocarp has enough coins
            }
        }

        // Calculate additional coins needed to ensure Monocarp takes exactly k coins
        int extra_needed = max(0, k - current_total);

        cout << coins_to_add + extra_needed << endl;
    }

    return 0;
}
