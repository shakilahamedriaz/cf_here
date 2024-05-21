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
      string s; 
      cin >> s;
    
    int hh = stoi(s.substr(0, 2));
    int mm = stoi(s.substr(3, 2));
    
    string meridiem;

    if (hh == 0) {
        hh = 12;
        meridiem = "AM";
    } else if (hh < 12) {
        meridiem = "AM";
    } else if (hh == 12) {
        meridiem = "PM";
    } else {
        hh -= 12;
        meridiem = "PM";
    }

    cout << setw(2) << setfill('0') << hh << ":" << setw(2) << setfill('0') << mm << " " << meridiem << endl;
}



   }


int main() {

    shakil_sol();

    return 0;
}
