#include<bits/stdc++.h>
using namespace std;
#define ll long long

void binary_search(ll arr[], ll n, ll lindex, ll rindex)
{

    ll left = lindex, right = rindex, anscnt = -1;

    while (left <= right)
    {
        ll mid = (left + right) / 2;

        if (arr[mid] <= query)
        {
            anscnt = mid + 1;
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    return anscnt;

}

int main()
{

ll n,k;
cin >> n >> k;

ll arr[n];
for(ll i=0;i<n;i++)
{
    cin >> arr[i];
}
sort(arr,arr+n);

while(k--)
{

ll left,right;
cin >> left >> right;

}

ll lindex,rindex;
for(ll i=0;i<n;i++)
{
    if(arr[i]==left)
    {
        lindex=i;
    }
    if(arr[i]==right)
    {
        rindex=i;
    }

    binary_search(arr, n, lindex, rindex);
}

return 0;
}