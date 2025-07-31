from typing import List

class Solution:
    def minSwaps(self, nums: List[int]) -> int:
        sub_size=nums.count(0)
        sub=nums[0:sub_size]
        n_swap=sub.count(1)
        res=n_swap
        nums+=nums
        for i in range(1, len(nums) // 2):
            if nums[i-1]==1:
                n_swap-=1
            if nums[i+sub_size-1]==1:
                n_swap+=1
            res=min(res, n_swap)
        return res

    def cfs(n: int)->int:
        for i in range(1, n+1):
            for c in str(i):
                res+=int(c)


s = Solution()
print(s.minSwaps([0,1,0,1,1,0,0]))
