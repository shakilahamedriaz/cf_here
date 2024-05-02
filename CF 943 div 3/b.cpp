#include <bits/stdc++.h>
using namespace std;

#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx,avx2,fma")

#define ll long long
#define ld long double
#define PI 3.1415926535897932384626433832795

struct Runtime 
{
    clock_t start;
    Runtime() {
        start = clock();
    }
    ~Runtime() {
        cout << "Runtime: " << fixed << setprecision(3) << (double) (clock() - start) / CLOCKS_PER_SEC << "s\n";
    }
};

void shakil_sol() 
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;

        string a, b;
        cin >> a >> b;
         int zero=0, one =0;

        for(int i=0; i<m; i++)
        {
            if(b[i]== '0') zero++;
            if(b[i]== '1') one ++;
        }

        if(zero==m) cout<< "0" <<endl;
        else if(one==m) cout<< "1"<<endl;

        else
        { 
              
         int cnt=0, i=0, j=0;
         while (i < n && j < m) 
         {

         if (a[i] == b[j]) 
         {
            i++;
            cnt++;
         }
           j++;
         }
            cout<<cnt<<endl;
        }
      
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    shakil_sol();

    return 0;
}

