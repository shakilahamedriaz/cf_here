#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx,avx2,fma")
#define ll long long
#define ld long double
#define PI 3.1415926535897932384626433832795
using namespace std;

int gcd(int a, int b) { if(a % b == 0) return b; else return gcd(b, a % b); }
int lcm(int a, int b) { return (a * b) / gcd(a, b); }

struct Runtime 
{
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
    int t;
    cin >>t;
    while(t--)
    {
            int x, y;
            cin >> x >> y;
            
            if(x == 0 && y == 0) cout<< "0" << "\n";
            else if(y >= 2)
            {
                 int  tempy = y / 2;
                 float check = y / 2.0;

                int can_containX = tempy * 7;

                if(check != (int)check)
                {
                     tempy +=1;
                     can_containX +=11;
                }     
                
                if(x <= can_containX )
                {
                    tempy = tempy;
                }
                else if(x > can_containX)
                {
                    x = x - can_containX;
                    
                    if(x < 15)
                    {
                        tempy += 1;
                    }
                    else if(x >= 15)
                    {
                        int tempy = x / 15;
                        float check2 = x / 15.0;

                        if(check2 != (int)check2)
                        {
                            tempy += 1;
                        }
                    }
                }

                cout<< tempy << "\n";
            }
            else if(y < 2)
            {
                int ans = 0;
                if(y == 0)
                {
                   if(x <= 15)
                   {
                      ans += 1;
                   }
                   else if(x > 15)
                   {
                       ans = x / 15;
                       float check3 = x / 15.0;
                       if(check3 != (int)check3)
                       {
                          ans+=1;
                       }
                   }
                }
                else if(y == 1)
                {
                     ans = 1;
                     
                     int contain = x - 7;
                     
                     if(contain <= 11)
                     {
                        ans = ans;
                     }
                     else if(contain > 11 && contain <= 15)
                     {
                         ans +=2;
                     }
                     else if( contain > 15)
                     {
                         
                         ans += x / 15;
                         int check4 = x / 15.0;
                         if(check4 != (int)check4)
                         {
                            ans += 1;
                         }
                     }
                }
  
                

                cout<< ans << "\n";
            }

    }

}
int32_t main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    shakil_sol();

    return 0;
}