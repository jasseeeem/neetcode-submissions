#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> output_map;
        for (string str: strs) {
            string str_sorted = str;
            sort(str_sorted.begin(), str_sorted.end());
            output_map[str_sorted].push_back(str);
        }
        vector<vector<string>> output_vector;
        for (const auto& [str_sorted, str_list]: output_map) {
            output_vector.push_back(str_list);
        }
        return output_vector;
    }
};
