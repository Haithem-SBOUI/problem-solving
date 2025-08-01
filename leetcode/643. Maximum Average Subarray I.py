from typing import List


class Solution:
    def findMaxAverage(self, nums: List[int], k: int) -> float:
        sum=0
        for i in range(0, k):
            sum+=nums[i]
        max_sum=sum
        for i in range(k, len(nums)):
            sum+=nums[i]-nums[i-k]
            max_sum=max(sum, max_sum)
        return max_sum/k

s = Solution()
print(s.findMaxAverage([1,12,-5,-6,50,3], 4))