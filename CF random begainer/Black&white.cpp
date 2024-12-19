#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
     string a,b;
     cin >>a>>b;

     char lastN1= a.back();
     char lastN2= b.back();

     int n1= lastN1-'0';
     int n2= lastN2-'0';


     int sum= n1+n2;
     
     if(sum%2==0)
     {
         cout<<"Black"<<endl;
     }
     else
     {
         cout<<"White"<<endl;
     }
   
     

    return 0;
}