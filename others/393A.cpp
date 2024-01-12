//author:Shakil Ahamed Riaz-(shakilswe)
#include <bits/stdc++.h>
using namespace std;

//for optimizes GCC code
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx,avx2,fma")

#define ll long long
#define ld long double
#define ar array
#define sza(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()
#define PI 3.1415926535897932384626433832795l
#define pb(e) push_back(e)
#define fst first
#define snd second
#define pr pair<int, int>
#define mp make_pair
#define flp(i, a, b) for(int i = a; i <= b; i++)
#define sqr(a) (a)*(a)
#define mod 1000000007
#define N "\n"

using namespace std;

int gcd(int a, int b) { if(a % b == 0) return b; else return gcd(b, a % b); }
int lcm(int a, int b) { return (a * b) / gcd(a, b); }

void sr_sol()
{
    
   
        string s;
        cin >>s;

        ll Ncnt=0, Icnt=0, Ecnt=0, Tcnt=0; //nineteen, -->nnn, i, eee, t

        for (int i = 0; i < s.size(); i++)
        {
           if(s[i]=='n') Ncnt++;
           else if(s[i]=='i') Icnt++;
           else if(s[i]=='e') Ecnt++;
           else if(s[i] == 't') Tcnt++;
        }

        Ncnt= Ncnt/3;
        Icnt= Icnt/1;
        Ecnt= Ecnt/3;
        Tcnt= Tcnt/1;

        int Total= min(Ncnt,min(Icnt,min(Ecnt,Tcnt)));

        cout<<Total<<N;
    
}

int32_t main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    //sr_sol(): shakil_riaz's solution  
    sr_sol();

    return 0;
}
