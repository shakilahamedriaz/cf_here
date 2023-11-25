//https://codeforces.com/contest/1901/problem/A
//Author: Shakil Ahamed Riaz

#include <bits/stdc++.h>
using namespace std;
#define ll long long

void sr_sol(long long a, long long x)
{
    ll arr[a];
    for(ll i=1; i<=a; i++)
    {
        cin >>arr[i];
    }

    ll ans=arr[1];
    ans= max(ans,(x-arr[a])*2);

    for(ll i=2; i<=a; i++)
    {
        ans=max(ans, arr[i]-arr[i-1]);

    }
    cout <<ans<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >>t;
    while(t--)
    {
        int a,x;
        cin >>a>>x;
        sr_sol(a,x);
    }

    return 0;
}
