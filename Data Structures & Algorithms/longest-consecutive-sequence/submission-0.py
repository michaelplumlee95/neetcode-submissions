class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        # Convert the array into a set to check for the existence of values in O(1)
        # Check to see if a number starts a sequence
        numSet = set(nums)
        longest = 0

        for n in nums:
            if (n-1) not in numSet:
                length = 0
                while (n + length) in numSet:
                    length += 1
                longest = max(length, longest)
        return longest