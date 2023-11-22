#include<bits/stdc++.h>
using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a,b,c;
    cin >> a >> b >> c;
   
    int minno = min(a,min(b,c));
    int maxno = max(a,max(b,c));

    cout<<minno<<" "<<maxno<<endl;
    
  
    return 0;
}