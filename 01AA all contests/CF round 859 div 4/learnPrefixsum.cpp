#include<bits/stdc++.h>
using namespace std;

int main()
{

       int n;
       cin >> n;
       
       int arr[n+1];
       for(int i = 0; i < n; i++) cin >> arr[i];

       int prefixSum[n+1]; // same array size as before
       prefixSum[0] = arr[0];

       for(int i = 0; i < n; i++)
       {
           prefixSum[i] = prefixSum[i-1] + arr[i];
       }

       int q;
       cin >> q;
       while(q--)
       {
           int l, r;
           cin >> l >> r;
           int ans = 0;
           if(l == 0) ans = prefixSum[r];              // cz total array sum mean kora hyche.
           else ans = prefixSum[r] - prefixSum[l-1];   // cz r porjonto sum theke l er ager index porjonto sum bad hewa hoyeche

           cout<< ans << "\n";
       }


    

    return 0;
}