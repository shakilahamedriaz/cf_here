#include<iostream>
using namespace std;
#define ll long long

ll binary_search(ll arr[], ll n, ll query)
{
    ll left=0, right=n-1, anscnt=-1;

    while(left<=right)
    {
        ll mid=(left+right)/2;

         if(arr[mid]>=query)
         {
             anscnt=mid+1;
             right=mid-1;
         }
         else
         {
                left=mid+1;
         }
         
    }

    return anscnt;
   
}

void sr_sol(ll arr[], ll query[], ll n, ll k)
{
    for(int i=0; i<k; i++)
    {
        ll ans=binary_search(arr, n, query[i]);

        if(ans!=-1)
        {
            cout<< ans <<endl;
        }
        else
        {
            cout<< n+1 <<endl;
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