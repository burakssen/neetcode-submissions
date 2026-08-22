class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> complements;
        for(size_t i = 0; i < nums.size(); ++i){
            const int complement = target - nums[i];
            if(complements.contains(nums[i])) return {complements[nums[i]], int(i)};
            complements[complement] = i;
        }
        return {};
    }
};
