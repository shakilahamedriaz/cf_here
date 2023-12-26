#include<bits/stdc++.h>
using namespace std;

void sr_sol(int n, string s)
{
    set<int> st;
    int totalStr=0;

    for(int i=0; i<n; i++)
    {

        st.insert(s[i]);

        totalStr+=st.size();
    }

    cout<<totalStr<<endl;
}

int main()
{

    int t;
    cin >>t;
    while(t--)
    {
        int n;
        string s;

        cin >>n>>s;

        sr_sol(n,s);
    }

    return 0;
}