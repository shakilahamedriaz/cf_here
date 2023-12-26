#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >>t;
    while(t--)
    {
        int n;
        cin >>n;
        vector<int>sr(n);

        bool zero=false, oddneg=false;
        int negVal=0;

        for(int i=0; i<n; i++)
        {
            cin >>sr[i];

            if(sr[i]==0) zero=true;
            else if(sr[i]<0) negVal++;
        }

        if(negVal%2==1) oddneg=true;

        if(zero==true || oddneg==true)
        {
            cout<< "0" <<endl;
        }
        else
        {
            cout<<1<<endl;
            cout<<"1 0"<<endl;
        }

    }

    return 0;
}