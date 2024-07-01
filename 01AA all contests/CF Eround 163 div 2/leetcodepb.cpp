#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int romanToInt(string s) {
        
        unordered_map<char, int> mp = {
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000}
    };
        
        int len = s.size();
        //store in ans last character of the string
        int ans =  
        
        for(int i = len-1; i >=0; i--)
        {
            if(mp[i-1] < mp[i])
            {
                ans += (mp[i] - mp[i-1]);
            }
            else
            {
                ans += mp[i];
            }
        }

        return ans;
    }
};