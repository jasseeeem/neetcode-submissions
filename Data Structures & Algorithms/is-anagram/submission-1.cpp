#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {        
        if (s.length() != t.length()) return false;
        vector<pair<int, int>> occurences(26, {0, 0});
        const int OFFSET = 97;
        for (int i=0; i<s.length(); i++) {
            occurences[static_cast<int> (s[i]) - OFFSET].first++; 
            occurences[static_cast<int> (t[i]) - OFFSET].second++; 
        }
        for (int i=0; i<26; i++) {
            if (occurences[i].first != occurences[i].second) return false;
        }
        return true;
    }
};
