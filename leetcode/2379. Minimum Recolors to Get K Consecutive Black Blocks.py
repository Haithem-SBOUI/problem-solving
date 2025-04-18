class Solution:
    def minimumRecolors(self, blocks: str, k: int) -> int:
        res=len(blocks)
        for i in range(len(blocks)-k + 1):
            res=min(res, blocks[i:i+k].count('W'))
        return res



s = Solution()
print(s.minimumRecolors("WBWW", 2))
