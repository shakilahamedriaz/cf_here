#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(0); cout.tie(0);


   ll t;
   cin >> t;
   while(t--)
   {

      ll n, x;
      cin >> n >> x;
      ll arr[n];

      for(ll i= 0; i < n; i++)
      {
        cin >> arr[i];
      }
      
      ll cnt = 0;
      ll ans = arr[0];
      
        for(ll i = 1; i < n; i++)
        {
            if((ans & arr[i]) == x) 
            {
                cnt ++;
                ans = x;
            }
            else
            {
                ans = arr[i];
            }
        }

                if(cnt == 0)
                {
                    cout<< "-1" << "\n";
                }
                else
                {
                    cout<< cnt << "\n";
                }
   }

    return 0;
}