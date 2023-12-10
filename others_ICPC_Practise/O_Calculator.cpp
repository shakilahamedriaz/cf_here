#include<bits/stdc++.h>
using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int a,b;
    char c;
    cin >>a>>c>>b;

    if(c=='+')
    {
        cout<<a+b<<endl;
    }
    else if(c=='-')
    {
        cout<<a-b<<endl;
    }
    else if(c=='*')
    {
        cout<<a*b<<endl;
    }
    else if(c=='/')
    {
        cout<<int(a/b)<<endl;
    }
   
  
    return 0;
}