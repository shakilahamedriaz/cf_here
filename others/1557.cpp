#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin>>t;
    while(t--)
    {
       int n;
       cin >>n;
       
       vector<int>ans(n);
       for(int i=0; i<n; i++)
       {
         cin >>ans[i];
       }
 
       sort(ans.begin(), ans.end());

         double total=0;
            for(int i=0; i<n-1; i++)
            {
                total+=ans[i];
            }
            total=total/(n-1);
            total+=ans[n-1];

       cout<<fixed<<setprecision(9)<<total<<endl;
       
    }

    return 0;
}