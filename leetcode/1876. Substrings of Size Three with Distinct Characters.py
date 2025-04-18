class Solution:
    def isGoodStr(self, s) -> bool:
        for i in range(len(s)):
            if s.count(s[i]) > 1:
                return False
        return True

    def countGoodSubstrings(self, s: str) -> int:
        if len(s) == 1:
            return True
        res=0
        l=0
        r=min(l+3,len(s))
        while r<=len(s):
            if self.isGoodStr(s[l:r]):
                res+=1
            l+=1
            r=l+3
        return res

s = Solution()
print(s.countGoodSubstrings("axa"))
