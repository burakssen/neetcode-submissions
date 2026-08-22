class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        if len(strs) == 0: return ""

        prefix = strs[0]

        for str in strs:
            while not str.startswith(prefix):
                prefix = prefix[:-1]
                if len(prefix) == 0:
                    return ""
        
        return prefix