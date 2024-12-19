#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx,avx2,fma")
#define ll long long
#define ld long double
#define PI 3.1415926535897932384626433832795

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


// void is_correspondence(string s, vector<ll> v)
// {
//     vector<ll> con_int;
//     for(ll i = 0; i < s.size(); i++)
//     {
//         con_int.push_back(s[i] - '0');
//     } 

//     if(con_int != v)
//     {
//         cout  << "NO" << "\n";
//         continue;
       
//     }
//     else
//     {
//         cout << "NO" << "\n";
//     }
// }

void shakil_sol() 
{
    ll n, m;
    cin >> n;
    vector<ll> v;
    for(ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        v.push_back(x);
    }

    cin >> m;
    while( m-- )
    {
        string s;
        cin >> s;
        
        //1st condition
        if(s.size() != n)
        {
            cout << "NO" << "\n";
        }
        else
        {
             //2nd condition
            map<char, vector<ll>> mp;
            for(ll i = 0; i < s.size(); i++)
            {
                mp[s[i]].push_back(i);
            }

            bool ok = true;
            for(auto it: mp)
            {
                for(ll k = 0; k < it.second.size() - 1; k++)
                {
                    if(v[it.second[k]] != v[it.second[k+1]])
                    {
                        ok = false;
                        break;
                    }
                }
            }

            if(!ok)
            {
                 cout << "NO" << "\n";
                 continue;
            }

            //3rd condition
            map<ll, vector<ll>> mp2;
            for(ll i = 0; i < n; i++)
            {
                mp2[v[i]].push_back(i);
            }

            for(auto it: mp2)
            {
                for(int k = 0; k < it.second.size() - 1; k++)
                {
                    if(s[it.second[k]] != s[it.second[k+1]])
                    {
                        ok = false;
                        break;
                    }
                }
            }

            if(!ok)
            {
                cout << "NO" << "\n";
                
            }
            else
            {
                cout << "YES" << "\n";
            }
            
        }
    }
}


int32_t main() 
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;
    while(t--)
    {
        shakil_sol();
    }
   
    return 0;
}

