#include<bits/stdc++.h>
using namespace std;


void sr_sol(int arr[], int n)
{
    int totalSumOf_elements=0;
    for(int i=0; i<n; i++)
    {
        totalSumOf_elements+=arr[i];
    }

    if(totalSumOf_elements%2==0)
    {
        cout<< "YES" <<endl;
    }
    else
    {
        cout<< "NO" <<endl;
    }
}
int main()
{

   int t;
   cin >>t;
   while(t--)
   {
     int n,i;
     cin >>n;
     int arr[n];
     for(i=0; i<n; i++)
     {
        cin >> arr[i];
     }

     sr_sol(arr, n);

   }

    return 0;
}