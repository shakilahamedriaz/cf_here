#include <bits/stdc++.h>
using namespace std;

#define ll long long

int gcd(int a, int b) { if(a % b == 0) return b; else return gcd(b, a % b); }
int lcm(int a, int b) { return (a * b) / gcd(a, b); }

void shakil_sol()
{
   int t; cin >>t;
   while(t--)
   {
      int n;
      cin >> n;

        char a[n][n];

        int cnt=0;

        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                cin >> a[i][j];

            }
        }
        
        bool ok= false;
        for(int i=0; i<n; i++)
        {
            int cnt=0;
            for(int j=0; j<n; j++)
            {
                if(a[i][j]=='1')
                {
                    cnt ++;
                }
            }
            if(cnt==1)
            {
                ok= true;
                break;
            }
        }

        if(ok) cout<< "TRIANGLE" << "\n";
        else   cout<< "SQUARE" << "\n";
   }
}


int main() {

    shakil_sol();

    return 0;
}
