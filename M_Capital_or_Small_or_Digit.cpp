#include<bits/stdc++.h>
using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    char c;
    cin >>c;

    if(c>=48 && c<=57)
    {
        cout<<"IS DIGIT"<<endl;
    }
    else if(c>=65 && c<=122)
    {
        cout<< "ALPHA"<<endl;
        
        if(c>=65 && c<=90)
         {
           cout<<"IS CAPITAL"<<endl;
         }
         else
         {
            cout<< "IS SMALL" <<endl;
         }
    
    }
    
    return 0;
}