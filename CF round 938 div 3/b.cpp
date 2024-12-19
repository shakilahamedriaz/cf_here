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
       int  n;
       ll c, d;
       cin >> n >> c >> d;
       
       vector <ll> v (n * n);
       for(ll i = 0; i < n * n; ++i) cin >> v[i];
       sort(v.begin(), v.end());


       vector<ll> new_v;
       new_v.push_back(v[0]);  
       for(int i = 1; i < n; i++) 
       new_v.push_back(new_v [i-1] + c);
       
       for(int i=1; i<n; i++)
       {
           for(int j = 0; j < n; j++)
           {
               new_v.push_back(new_v[(i - 1) * n + j] + d);
           }
       }
       
       sort(new_v.begin(), new_v.end());

       cout<< (v == new_v ? "Yes" : "No") << '\n';
        
    }
}

int main() {

    shakil_sol();

    return 0;
}
