#include <bits/stdc++.h>
using namespace std;

int main() {
    int password;
    
    // Keep reading passwords until the end of input
    while (cin >> password) {

        if (password == 1999) {
            cout << "Correct" << endl;
        
            return 0;
        } else {
            cout << "Wrong" << endl;
        }
    }

 
    cout << "Wrong" << endl;

    return 0;
}
