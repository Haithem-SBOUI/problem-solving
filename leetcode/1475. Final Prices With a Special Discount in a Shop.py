from typing import List

class Solution:
    def finalPrices(self, prices: List[int]) -> List[int]:
        s = []
        for i, el in enumerate(prices):
            if len(s) == 0 or el > s[-1][1]:
                s.append([i, el])
            else:
                while len(s) > 0 and el<=s[-1][1]:
                    prices[s.pop()[0]] -= el
                s.append([i, el])
        return prices


s = Solution()
print(s.finalPrices([8,7,4,2,8,1,7,7,10,1]))
