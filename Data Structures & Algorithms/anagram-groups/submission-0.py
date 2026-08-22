class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        groups: dict[tuple[tuple[str, int], ...], list[str]] = {}
    
        for word in strs:
            char_count: dict[str, int] = {}
    
            for char in word:
                char_count[char] = char_count.get(char, 0) + 1
    
            key = tuple(sorted(char_count.items()))
    
            if key not in groups:
                groups[key] = []
    
            groups[key].append(word)
    
        return list(groups.values())
