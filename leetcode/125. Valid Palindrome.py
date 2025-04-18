class Solution:
    def isPalindrome(self, s: str) -> bool:
        s = s.lower()
        s1 = []
        for c in s:
            if c.isalnum():
                s1.append(c)
        l = 0
        r = len(s1) - 1
        while l < r:
            if s1[l] != s1[r]:
                return False
            l += 1
            r -= 1
        return True

s = Solution()
print(s.isPalindrome("0P"))