#include<bits/stdc++.h>
using namespace std;

void sr_sol(int n, int arr[])
{
    int evcnt=0,oddcnt=0,poscnt=0,negcnt=0;
    for(int i=0; i<n; i++)
    {
        if(arr[i]>0)
        {
            poscnt++;
        }
        else if(arr[i]<0)
        {
            negcnt++;
        
        }

        if(arr[i]%2==0)
        {
            evcnt++;
        }
        else
        {
            oddcnt++;
        }
    }

    cout<<"Even: "<<evcnt<<endl;
    cout<<"Odd: "<<oddcnt<<endl;
    cout<<"Positive: "<<poscnt<<endl;
    cout<<"Negative: "<<negcnt<<endl;
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    cin >>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin >>arr[i];
    }
    
    sr_sol(n,arr);

    return 0;
}