from typing import List


class Solution:
    def merge(self, nums1: List[int], m: int, nums2: List[int], n: int) -> None:
        i=m+n-1
        m-=1
        n-=1
        while m>=0 and n>=0:
            if nums1[m]>nums2[n]:
                nums1[i]=nums1[m]
                m-=1
                i-=1
            else:
                nums1[i]=nums2[n]
                n-=1
                i-=1
        while n>=0:
            nums1[i]=nums2[n]
            n-=1
            i-=1


s = Solution()
print(s.merge([1,2,3,0,0,0], 3, [2,5,6], 3))
