#include <iostream>
using namespace std;
#define ll long long int

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n, x, cnt = 0;
    cin >> n >> x;

    while (n--) {
        char a;
        ll b;
        cin >> a;
        cin >> b;

        if (a == '+')
            x += b;
        else if (b <= x)
            x = x - b;
        else
            cnt++;
    }

    cout << x << " " << cnt << endl;
    return 0;
}
