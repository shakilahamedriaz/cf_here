#include <iostream>
#include <map>
#include <bitset>
#include <cmath>
using namespace std;

bool isBinary(long long num) {
    while (num > 0) {
        int digit = num % 10;
        if (digit != 0 && digit != 1)
            return false;
        num /= 10;
    }
    return true;
}

void primeFactorization(long long n) {
    map<long long, long long> mp;

    for (long long i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            while (n % i == 0) {
                n /= i;
                mp[i]++;
            }
        }
    }

    for (auto it : mp) {
        if (!isBinary(it.first)) {
            cout << "NO" << endl;
            return;
        }
    }

    cout << "YES" << endl;
}

int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        primeFactorization(n);
    }
    return 0;
}
