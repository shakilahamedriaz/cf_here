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
        int n, k;
        cin >> n >> k;
        int arr[n];
        int init = 1;

        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
            init *= arr[i];
        }
        
        if(init % k == 0)
        {
            cout << 0 << "\n";
            continue;
        }

                sort(arr, arr+n);

                int x = arr[0];
                
                int proudct = 1;
                for(int i = 1; i < n; i++)
                {
                    proudct *= arr[i];
                }
                
                int cnt = 0;
                while(1)
                {
                    x ++;
                    cnt ++;
                    int temp = proudct * x;
                    if(temp % k == 0)
                    {
                        break;
                    }
                }

                cout<< cnt << "\n";

    }

}
int32_t main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    shakil_sol();

    return 0;
}