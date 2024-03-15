

set<ll>s;
void PrintDivisors(ll n)
{
    for (ll i=1; i<=sqrt(n); i++)
    {
        if (n%i == 0)
        {

            if(n/i==i)
                s.insert(i);

            else
            {
               s.insert(i);
               s.insert(n/i);
            }
        }
    }
}


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll ar[n+2];
        for(int i=0;i<n;i++)cin>>ar[i];
        sort(ar,ar+n);
        ll ans=ar[0]*ar[n-1];
        
        PrintDivisors(ans);
        if(s.size()==n+2)
        {
            vector<ll>v;
            v.assign(s.begin(),s.end());
            v.erase(v.begin());
            v.pop_back();
            
            int a=0;
            for(int i=0;i<n;i++)
            {
                if(ar[i]!=v[i])
                {
                    a=1;
                    break;
                }
            }
            if(a==0)cout<<ans<<endl;
            else cout<<-1<<endl;
        }
        else cout<<-1<<endl;

        s.clear();
    }
    
    return 0;
}
