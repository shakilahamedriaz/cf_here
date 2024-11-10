#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;  // Number of test cases
    cin >> t;

    while (t--) {
        int n, k;  // n is the number of people, k is the threshold
        cin >> n >> k;

        vector<int> a(n);  // Array to store the gold of each person
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int robinGold = 0;  // Robin starts with 0 gold
        int giveCount = 0;  // Count of people Robin gives gold to

        for (int i = 0; i < n; i++) {
            if (a[i] >= k) {
                // Robin takes all gold if it's >= k
                robinGold += a[i];
            } else if (a[i] == 0 && robinGold > 0) {
                // Robin gives 1 gold if the person has 0 gold and Robin has gold to give
                robinGold--;
                giveCount++;
            }
        }

        cout << giveCount << endl;
    }

    return 0;
}
