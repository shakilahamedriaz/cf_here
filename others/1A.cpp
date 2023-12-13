#include<bits/stdc++.h>
using namespace std;
#define ll long long


void sr_sol(ll n, ll m, ll a)
{
     ll ans;
    ans=ceil((double)n/a)*ceil((double)m/a);
    cout<<ans<<endl;
}

int main()
{
   
   int n,m,a;
   cin >> n >> m >> a;
   
   sr_sol(n,m,a);
   
   return 0;
}