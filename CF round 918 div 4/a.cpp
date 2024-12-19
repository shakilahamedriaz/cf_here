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
     int a, b, c;
     cin >>a >>b >>c;

     if(a==b) cout<< c <<endl;
     else if(a==c) cout<< b<<endl;
     else if(b==c) cout<< a <<endl;
     
  
   }
}


int main() {

    shakil_sol();

    return 0;
}
