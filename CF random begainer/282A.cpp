#include <bits/stdc++.h>
using namespace std;

#define ll long long

int gcd(int a, int b) { if(a % b == 0) return b; else return gcd(b, a % b); }
int lcm(int a, int b) { return (a * b) / gcd(a, b); }

void shakil_sol()
{
    int t, pluscnt=0, minuscnt=0;
    cin >>t;

    while(t--)
    {
       string s;
       cin >>s;

       if(s[1]=='+') pluscnt++;
       else minuscnt++;
       
       
    }
    cout<<(pluscnt-minuscnt)<< '\n';
}

int main() {

    shakil_sol();

    return 0;
}
