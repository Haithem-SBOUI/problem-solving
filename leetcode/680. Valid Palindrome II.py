class Solution:
    def validPalindrome(self, s: str) -> bool:
        l, r=0, len(s)-1
        canDelete = True
        while l<r:
            if s[l] != s[r]:
                if canDelete:
                    canDelete = False
                    if s[l+1] == s[r]:
                        l+=1
                    elif s[l] == s[r-1]:
                        r-=1
                    else:
                        return False
                else:
                    return False
            else:
                l+=1
                r-=1
        return True

s = Solution()
print(s.validPalindrome("aguokepatgbnvfqmgmlcupuufxoohdfpgjdmysgvhmvffcnqxjjxqncffvmhvgsymdjgpfdhooxfuupuculmgmqfvnbgtapekouga"))