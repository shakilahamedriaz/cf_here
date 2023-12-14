#include<bits/stdc++.h>

using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b;
    c=max(a,b);
    c=(6-c)+1;
    if(c%2==1)
    {
        if(c==3)
        cout<< "1/2"<<endl;
        else
            cout<<c<<"/6"<<endl;
    }
    else
    {
        if(c==4)
            cout<< "2/3"<<endl;
        else
        
            cout<< "1/"<<c<<endl;
    }

    return 0;
}
