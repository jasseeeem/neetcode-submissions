#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> frequency_map;
        for (int num: nums) {
            frequency_map[num]++;
        }

        priority_queue<pair<int, int>> q;
        for (const auto& [num, freq] : frequency_map) {
            q.push({freq, num});
        }

        std::vector<int> output;
        while(output.size() < k) {
            output.push_back(q.top().second);
            q.pop();
        }
        return output;
    }
};