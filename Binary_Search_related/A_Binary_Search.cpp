#include<bits/stdc++.h>
using namespace std;
#define ll long long int

bool binary_search(ll arr[], ll query, ll n)
{
    ll left=0, right=n-1;

    while(left<=right)
    {
        ll mid=(left+right)/2;
        
        if(arr[mid]==query)
        {
             return true;
        }
        else if(query<arr[mid])
        {
            right=mid-1;
        }
        else
        {
            left=mid+1;
        }
    }
    return false;
}

void sr_sol(ll arr[], ll query[], ll  n, ll k)
{
    for(int i=0; i<k; i++)
    {
        if(binary_search(arr, query[i], n))
        {
            cout<< "YES" <<endl;
        }
        else
        {
            cout<< "NO" <<endl;
        }
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