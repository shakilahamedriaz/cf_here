#include<bits/stdc++.h>
using namespace std;

void sr_sol(string s)
{
    int n = s.size();

    for (int lenA = 1; lenA < n; lenA++)
    {
        string s1 = s.substr(0, lenA);
        string s2 = s.substr(lenA);

        if (s2[0] == '0' || s1[0] == '0') continue;

        int a = stoi(s1);
        int b = stoi(s2);

        if (b > a)
        {
            cout << a << " " << b << endl;
            return;
        }
    }

    cout << "-1" << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        sr_sol(s);
    }

    return 0;
}
