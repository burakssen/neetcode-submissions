class Solution {
public:
    string longestCommonPrefix(const vector<string>& strs) {
        if (strs.empty()) return "";

        const auto& shortest = *std::min_element(
            strs.begin(), strs.end(),
            [](const string& a, const string& b) {
                return a.size() < b.size();
            }
        );

        for (size_t i = 0; i < shortest.size(); ++i) {
            for (const auto& s : strs) {
                if (s[i] != shortest[i]) {
                    return shortest.substr(0, i);
                }
            }
        }

        return shortest;
    }
};