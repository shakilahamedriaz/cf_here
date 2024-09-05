#include <bits/stdc++.h>
using namespace std;

void shakil_sol() 
{
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    map<int, int> mp;
    for(int i = 0; i < n; i++)
    {
        int b; cin >> b;
        mp[v[i]] = b; 
    }

    sort(v.begin(), v.end());
    for(int i = 0; i < n; i++) cout<< v[i] << " ";
    cout<< "\n";
    for(int i = 0; i < n; i++) cout<< mp[v[i]] << " ";
    cout<< "\n";


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
