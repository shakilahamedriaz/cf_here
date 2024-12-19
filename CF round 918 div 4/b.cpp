#include <bits/stdc++.h>
using namespace std;

#define ll long long

int gcd(int a, int b) { if(a % b == 0) return b; else return gcd(b, a % b); }
int lcm(int a, int b) { return (a * b) / gcd(a, b); }


void shakil_sol()
{
   int t;
    cin >>t;
   while(t--)
   {

      char arr[3][3];
      int cnta=0, cntb=0, cntc=0;

      for(int i=0; i<3; i++)
      {
        for(int j=0; j<3; j++)
        {
            cin >> arr[i][j];

            if(arr[i][j]=='A') cnta++;
            else if(arr[i][j]=='B') cntb++;
            else cntc++;
        }
        
      }
      
      if(cnta!=3) cout<< "A" << "\n";
      else if(cntb!=3) cout<< "B" << "\n";
      else cout<< "C" << "\n";

   }
}


int main() {

    shakil_sol();

    return 0;
}
