#include <iostream>
using namespace std;

void sr_sol() {
    ios_base::sync_with_stdio(false);
}

int main() {
    sr_sol();

    int t;
    cin >> t;

    while (t--) {
        int x, y, z;
        cin >> x >> y >> z;

        cout << (abs(y - z) % 2 == 0 ? 1 : 0) << " ";
        cout << (abs(x - z) % 2 == 0 ? 1 : 0) << " ";
        cout << (abs(x - y) % 2 == 0 ? 1 : 0) << " " << endl;
    }

    return 0;
}
