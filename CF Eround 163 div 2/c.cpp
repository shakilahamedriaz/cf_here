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
        int ans = mp[s[len-1]];

        for(int i = len-2; i >=0; i--)
        {
            if(mp[s[i]] < mp[s[i+1]])
            {
                ans -= mp[s[i]];
            }
            else
            {
                ans += mp[s[i]];
            }
        }

        return ans;
    }
};

/*
Initialization:
............................................
s = "MCMXCIV"
len = s.size() = 7
ans = mp[s[len-1]] = mp[s[6]] = mp['V'] = 5


First iteration:
............................................
i = len - 2 = 7 - 2 = 5
s[i] = s[5] = 'I'
s[i+1] = s[6] = 'V'
*/