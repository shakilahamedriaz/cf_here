#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
  int t;
  cin >> t;
  while (t--) {
    string x, y;
    cin >> x >> y;
    int n = x.size();
    bool f = false;
    for (int i = 0; i < n; ++i) {
      if ((x[i] > y[i]) == f) swap(x[i], y[i]);
      f |= (x[i] != y[i]);
    }
    cout << x << '\n' << y << '\n';
  }
}