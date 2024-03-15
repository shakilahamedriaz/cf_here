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

struct Runtime {
    clock_t start;
    Runtime() {
        start = clock();
    }
    ~Runtime() {
        cout << "Runtime: " << fixed << setprecision(3) << (double) (clock() - start) / CLOCKS_PER_SEC << "s\n";
    }
};

void sr_sol() {
    
    int t;
    cin >>t;
    while(t--)
    {
        ll n;
        cin >>n;

        ll arr[n];

        set<int>st;
        for(int i=0; i<n; i++)
        {
            cin >>arr[i];
            st.insert(arr[i]);
        }


        if(st.size()==1)
        {
            cout<< "0"<<N;
        }

        else
        {
           sort(arr, arr+n);

             int a=arr[0]-arr[n-1];
             int b=arr[0]-arr[n-2];
             int c=arr[1]-arr[n-2];
             int d=arr[1]-arr[n-1];

             int ans=abs(a+b+c+d);

             cout<<ans<<N;
        }


    
    }
}

int32_t main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    //sr_sol(): shakil_riaz's solution  
    sr_sol();

    return 0;
}
