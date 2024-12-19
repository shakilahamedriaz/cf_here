#include <bits/stdc++.h>
using namespace std;

void shakil_sol() 
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    char prev = '1';
    vector<int> v;

    for(char c : s)
    {
        if(c == '1')
            v.push_back(1);

        if(c == '0' && prev == '1')
            v.push_back(0);
        prev = c;
    }

    int ones = 0, zeros = 0;

    for(int i = 0; i < v.size(); i++)
    {
        if(v[i] == 1) ones++;
        else zeros++;
    }
    
    if(ones > zeros)
    {
        cout<< "Yes" << "\n";
    }
    else
    {
        cout<< "No" << "\n";
    }
}

int main() 
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;
    while(t--)
    {
        shakil_sol();
    }
   
    return 0;
}
