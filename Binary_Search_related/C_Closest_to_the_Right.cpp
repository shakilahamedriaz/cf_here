#include<iostream>
using namespace std;
#define ll long long

// Binary search function to find the minimum index
ll binary_search(ll arr[], ll n, ll query)
{
    ll left = 0, right = n - 1, anscnt = -1;

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

    return anscnt+1;
}

// Function to solve the problem using binary search
void sr_sol(ll arr[], ll query[], ll n, ll k)
{
    for (int i = 0; i < k; i++)
    {
        ll ans = binary_search(arr, n, query[i]);

        if (ans != -1)
        {
            cout << ans << endl;
        }
        else
        {
            cout <<  1 << endl;
        }
    }
}

int main()
{
    ll n, k;
    cin >> n >> k;

    ll arr[n];
    ll query[k];

    // Input array elements
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Input queries
    for (ll i = 0; i < k; i++)
    {
        cin >> query[i];
    }

    // Solve and print the result
    sr_sol(arr, query, n, k);

    return 0;
}
