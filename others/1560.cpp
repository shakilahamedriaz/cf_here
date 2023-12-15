#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >>t;
    while(t--)
    {
        int k;
        cin >>k;
        vector<int>ans;

        for(long long i=1; i<=2000; i++)
        { 
            if(i<10)
            {
                if(i%3==0) continue;
               ans.push_back(i);
                
            }

            else if(i>=10)
            {
            int lastindex= i%10;
            

            if(i%3==0 || lastindex==3) continue;
            ans.push_back(i);

            }
           
        }

       cout<<ans[k-1] <<endl;
    
    }


    return 0;
}