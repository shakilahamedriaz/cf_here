#include <bits/stdc++.h>
using namespace std;

#define ll long long

int gcd(int a, int b) { if(a % b == 0) return b; else return gcd(b, a % b); }
int lcm(int a, int b) { return (a * b) / gcd(a, b); }

vector< ll > vr(200005);

int sumofdigits(int n)
{
    // int sum=0;
    // while(n > 0)
    // {
    //   sum+= n%10;
    //   n/=10;   
    // }

    string s= to_string(n);
    int sum=0;
    for(int i=0; i<s.size(); i++)
    {
        sum+= s[i]-'0';
       // sum+= s[i]-48;
    }

    return sum;
}


void shakil_sol()
{
   int sum = 0;
   for(int i=1; i<=200005; i++) 
   {
      sum += sumofdigits(i);
        vr[i]= sum;
   }
   
   int t;
   cin >> t;
   while(t--)
   {
      int n; cin >> n;
      cout<< vr[n] << '\n';
   }
}


int main() 
{

    shakil_sol();

    return 0;
}
