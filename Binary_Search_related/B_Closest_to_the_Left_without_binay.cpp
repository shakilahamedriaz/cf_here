#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll without_binary_search(ll arr[], ll n, ll query)
{
    int cntindex=0;
    for(int i=0; i<n; i++)
    {
        if(arr[i]<=query)
        {
            cntindex++;
        }
    }

      return cntindex;
   
}

void sr_sol(ll arr[], ll query[], ll n, ll k)
{
    for(int i=0; i<k; i++)
    {

        
        ll ans= without_binary_search(arr, n, query[i]);
        cout<< ans <<endl;
    }
}

int main()
{
    ll n,k;
    cin >> n >> k;

    ll arr[n];
    ll query[k];

    for(ll i=0;i<n;i++)
    {
        cin >> arr[i];
    }

    for(ll i=0;i<k;i++)
    {
        cin >> query[i];
    }

    sr_sol(arr,query,n,k);

    return 0;
}