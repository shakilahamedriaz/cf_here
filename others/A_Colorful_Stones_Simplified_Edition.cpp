#include <iostream>
#include <string>

using namespace std;

int main() {
    string s, t;
    cin >> s >> t;

    int pos = 1;

    for (char i=0; i<t.size(); i++) {
    
        if (s[pos - 1] == t[i]) {
        
            pos++;
        }
    }

    cout << pos << endl;

    return 0;
}
