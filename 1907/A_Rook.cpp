#include<bits/stdc++.h>
using namespace std;

void sr_sol()
{
    string s;
    cin >> s;

    char ch=s[0];
    int num=s[1]-'0';

    for(int i=1; i<=8; i++)
    {  
         if(i==num) continue;
         cout<<ch<<i<<endl;
    }

    for(char i='a'; i<='h'; i++)
    {
        if(i==ch) continue;
        cout<<i<<num<<endl;
    }   
}

int main()
{
    int t;
    cin >>t;
   
    while(t--)
    {
        sr_sol();
    }
    return 0;
}