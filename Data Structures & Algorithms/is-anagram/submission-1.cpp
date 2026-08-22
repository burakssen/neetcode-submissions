class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;

        std::unordered_map<char, int> count;

        for (size_t i = 0; i < s.length(); ++i) {
            count[s[i]]++;
            count[t[i]]--;
        }

        for (const auto& [key, value] : count) if (value != 0) return false;
        return true;
    }
};
