#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    static bool comparator(pair<int, int> a, pair<int, int> b) {
        return a.first > b.first;
    }
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> m;
        for (int num: nums) {
            if (m.count(num)) m[num]++;
            else m[num] = 1;
        }
        vector<int> output;
        vector<pair<int, int>> output_pairs;
        for (const auto& [key, value] : m) {
            output_pairs.push_back({value, key});
        }
        sort(output_pairs.begin(), output_pairs.end(), comparator);
        for(int i=0; i<k; i++) {
            output.push_back(output_pairs[i].second);
        }
        return output;
    }
};