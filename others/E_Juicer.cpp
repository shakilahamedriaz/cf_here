#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
       ll n,b,d,total=0;
       cin>>n>>b>>d;

       vector<int>komola(n);
       int cnt=0;
       for(int i=0; i<n; i++)
       {
          int x;
          cin>>x;
          if(x<=b)
          {
            total+=x;
            
        
            if(total>d)
            {

               cnt++;
               total=0;

            }
            
          }
        
       }
       cout<<cnt<<endl;
       

       return 0;
}

