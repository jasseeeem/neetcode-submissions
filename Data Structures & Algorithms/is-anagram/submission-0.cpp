#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {        
        if (s.length() != t.length()) return false;
        vector<int> s_occurences(26, 0), t_occurences(26, 0);
        const int OFFSET = 97;
        for (int i=0; i<s.length(); i++) {
            s_occurences[static_cast<int> (s[i]) - OFFSET]++; 
            t_occurences[static_cast<int> (t[i]) - OFFSET]++; 
        }
        for (int i=0; i<26; i++) {
            if (s_occurences[i] != t_occurences[i]) return false;
        }
        return true;
    }
};
