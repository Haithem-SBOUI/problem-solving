from typing import List


class Solution:
    def luckyNumbers (self, matrix: List[List[int]]) -> List[int]:
        m = len(matrix)
        n = len(matrix[0])
        maxCols = [0]*n
        minRows = [100001]*m
        for i in range(m):
            minRows[i] = min(matrix[i])
            for j in range(n):
                maxCols[j] = max(matrix[i][j], maxCols[j])
        res=[]
        for i in range(m):
            for j in range(n):
                if matrix[i][j] == maxCols[j] and matrix[i][j] == minRows[i]:
                    res.append(matrix[i][j])
        return res

s = Solution()
print(s.luckyNumbers([[3,7,8],[9,11,13],[15,16,17]]))
