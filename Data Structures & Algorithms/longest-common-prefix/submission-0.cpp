class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";

        string prefix = strs[0];

        for (const auto& s : strs) {
            while (!s.starts_with(prefix)) {
                prefix.pop_back();

                if (prefix.empty())
                    return "";
            }
        }

        return prefix;
    }
};