#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> containers(n);
        long long sum = 0;

        for (int i = 0; i < n; i++) {
            cin >> containers[i];
            sum += containers[i];
        }

        // Check if the sum is divisible by n
        if (sum % n != 0) {
            cout << "NO" << endl;
            continue;
        }

        // Calculate the target amount each container should have
        long long target = sum / n;

        // Iterate over containers and check if each container can be made equal to the target
        bool possible = true;
        long long prefix_sum = 0;
        for (int i = 0; i < n; i++) {
            prefix_sum += containers[i];
            if (prefix_sum % (i + 1) != 0 || prefix_sum / (i + 1) != target) {
                possible = false;
                break;
            }
        }

        cout << (possible ? "YES" : "NO") << endl;
    }

    return 0;
}
