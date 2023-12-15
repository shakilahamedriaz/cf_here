#include <bits/stdc++.h>
using namespace std;

int main() {


    string s;
    getline(cin, s);

    string letters = s.substr(1, s.size() - 2); 

    set<char> dis;

    for (char letter : letters) {
        if (letter != ',' && letter != ' ') {
            dis.insert(letter);
        }
    }

    cout << dis.size() << endl;

    return 0;
}
