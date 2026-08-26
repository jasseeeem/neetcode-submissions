class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> occurences;
        for (int i=0; i<nums.size(); i++) {
            if (occurences.count(target-nums[i])) return {occurences[target-nums[i]], i}; 
            occurences[nums[i]] = i;
        }
        return {};
    }
};
