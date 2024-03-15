#include <iostream>
#include <cmath>

using namespace std;

int findPositionOfOne(int n) {
    // Initialize the array with values 1 to n
    int *a = new int[n + 1];
    for (int i = 1; i <= n; ++i) {
        a[i] = i;
    }

    // Perform swap operations
    for (int i = 2; i <= n; ++i) {
        // Find the largest divisor of i (other than i itself)
        int divisor = 2;
        while (divisor <= sqrt(i) && i % divisor != 0) {
            divisor++;
        }

        // Swap elements a[divisor] and a[i]
        swap(a[divisor], a[i]);
    }

    // Find the position of 1 in the resulting array
    int positionOfOne = 1;
    for (int i = 1; i <= n; ++i) {
        if (a[i] == 1) {
            positionOfOne = i;
            break;
        }
    }

    // Clean up allocated memory
    delete[] a;

    return positionOfOne;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int result = findPositionOfOne(n);
        cout << result << endl;
    }

    return 0;
}
