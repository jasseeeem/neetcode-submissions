#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> unique_elements;
        for (int i=0; i<nums.size(); i++) {
            if (unique_elements.count(nums[i]) > 0) return true;
            unique_elements.insert(nums[i]);
        }
        return false;
    }
};