#include <iostream>
#include <cmath>
using namespace std;

// Function to calculate minimum moves
int min_moves(int x, int y, int k) {
    // Calculate absolute distance needed to travel in x and y directions
    int dx = abs(x), dy = abs(y);

    // Calculate the total minimum steps needed to cover x and y distances
    int stepsX = (dx + k - 1) / k; // Minimum steps in the x direction
    int stepsY = (dy + k - 1) / k; // Minimum steps in the y direction

    // Total steps is the sum of stepsX and stepsY
    return stepsX + stepsY;
}

int main() {
    int t;
    cin >> t; // Number of test cases

    while (t--) {
        int x, y, k;
        cin >> x >> y >> k; // Read inputs for each test case

        // Calculate and output the minimum moves needed
        cout << min_moves(x, y, k) << endl;
    }

    return 0;
}
