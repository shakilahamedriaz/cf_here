#include<bits/stdc++.h>
using namespace std;

void sr_sol(vector<int> v, int n, int l)
{
    double maxElem=0, first, last,comp;

    first= abs(v[0]-0.0);
    last= abs(l-v[n-1]);

    comp=max(first,last);

    for(int i=0; i<n-1; i++)
    {
        if(v[i+1]-v[i] > maxElem)
        {
            maxElem=v[i+1]-v[i];
        }
    }

    maxElem=maxElem/2.0;

    double ans=max(comp,maxElem);

    cout<<fixed<<setprecision(10) <<ans<<endl;
}

int main()
{

   int n,l;
   cin>>n>>l;

   vector<int> v(n);
   for(int i=0; i<n; i++)
   {
      cin >> v[i];
   }
   
   sort(v.begin(), v.end());

 
   sr_sol(v, n, l);

    return 0;
}