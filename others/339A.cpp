#include <bits/stdc++.h>
using namespace std;

int main() {


    string s;
    getline(cin, s);
    
    int len=s.size();
    vector<int>sortIndex;

    for(int i=0; i<len; i++)
    {
       if(s[i]!='+')
       {
        sortIndex.push_back(s[i]);
       }
    }
    sort(sortIndex.begin(), sortIndex.end());
    int t=sortIndex.size();
    string str;
    if(t==1)
    {
        cout<<s<<endl;
    }
    else{
        int cnt=0;
        for(int i=0; i<t; i++)
        {
           str+=sortIndex[i];
           cnt++;
           if(cnt==t) break;
           str+='+';
        }

        cout<<str<<endl;
    }
    

    return 0;
}