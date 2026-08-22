class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        size_t size = nums.size();
        nums.resize(size*2);
        for(size_t i = 0; i < size; i++){
            nums[i + size] = nums[i];
        }
        return nums;
    }
};