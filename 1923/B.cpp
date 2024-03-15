#include <iostream>

int minOperations(int n, int a[]) {
    int b = -1, l = -1;
    for (int i = 0; i < n; i++) {
        if (a[i] == 1) {
            if (b == -1) {
                b = i;
            }
            l = i;
        }
    }

    int z = 0;
    for (int i = b + 1; i < l; i++) {
        if (a[i] == 0) {
            z++;
        }
    }

    return z;
}

int main() {
    int t;
    std::cin >> t;

    while (t--) {
        int n;
        std::cin >> n;

        int a[n];
        for (int i = 0; i < n; i++) {
            std::cin >> a[i];
        }

        int result = minOperations(n, a);
        std::cout << result << std::endl;
    }

    return 0;
}
