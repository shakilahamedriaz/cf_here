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

void shakil_sol() 
{
        ll tc;
        cin >> tc;
        while (tc--)
        { 
              string str;
              cin >> str;
              int len = str.size(), next;

              string a = "";
              string b = "";

              a += str[0];
              for(int i  =  1; i < len; i++)
              {
                    if(str[i] == '0')
                    {
                        a += str[i];
                    }
                    
                    if(str[i] != '0')
                    { 
                        next = i;
                        break;
                    }
              }

                for(int i = next; i < len; i++)
                {
                    b += str[i];
                }
                
                if(b.size() == 0) b += '0';

                int aa =  stoi(a);
                int bb =  stoi(b);

                if(bb > aa && aa != 0 && bb != 0)
                {
            
                    cout << a << " " << b << endl;
                }
                else
                {
                    cout << "-1" << endl;
                }

        }
}

int32_t main() 
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    shakil_sol();

    return 0;
}

