#include <iostream>
#include <vector>

using namespace std;

bool isVowel(char ch) {
    return ch == 'a' || ch == 'e';
}

void splitIntoSyllables(int n, const string& word) {
    vector<string> syllables;

    for (int i = 0; i < n; ++i) {
        string syllable;

        if (isVowel(word[i])) {
            syllable += word[i];
            syllables.push_back(syllable);
        } else {
            syllable += word[i];
            if (i + 1 < n && !isVowel(word[i + 1])) {
                syllable += word[i + 1];
                ++i;
            }
            syllables.push_back(syllable);
        }
    }

    for (int i = 0; i < syllables.size(); ++i) {
        cout << syllables[i];
        if (i < syllables.size() - 1) {
            cout << ".";
        }
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string word;
        cin >> word;

        splitIntoSyllables(n, word);
    }

    return 0;
}
