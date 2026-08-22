class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_map<int, bool> temp;
        for(auto num : nums){
            if(temp.contains(num)){
                return true;
            }
            temp[num] = true;
        }
        return false;
    }
};