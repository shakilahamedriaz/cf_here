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
      string s;
      cin >> s;
      int n = s.size();
      
      int cntA=0, cntB=0;
      for(int i=0; i<n; i++)
      {
         if(s[i]== 'A')
         {
            cntA++;
         }
         else
         {
            cntB++;
         
         }
      }

      if(cntA > cntB)
      {
         cout << "A" << endl;
      }
      else 
      {
         cout << "B" << endl;
      }
  
   }
}


int main() {

    shakil_sol();

    return 0;
}
