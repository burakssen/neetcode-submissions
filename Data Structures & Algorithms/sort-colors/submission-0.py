class Solution:
    def sortColors(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        store = [0,0,0]
        
        for num in nums:
            store[num] += 1
        
        index = 0
        for i, v in enumerate(store):
            for j in range(v):
                nums[index] = i
                index += 1
            
        