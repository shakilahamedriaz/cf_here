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

      string st1;
      string st2;
      
      for(int i=0; i<n ; i++)
      {
         if(i%2==0)
         {
            st1+="##";
            st2+="..";
         }
         else
         {
            st1+="..";
            st2+="##";
         }
      }

      st1+="\n"+st1;
      st2+="\n"+st2;

      for(int i=0; i<n; i++)
      {
         if(i%2==1) cout<< st2 << '\n';
         else cout<< st1 << "\n";
      }

   }
}

int main() {

    shakil_sol();

    return 0;
}
