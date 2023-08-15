# 70. Climbing Stairs
# https://leetcode.cn/problems/climbing-stairs/?envType=featured-list&envId=2cktkvj

class Solution:
    def climbStairs(self, n: int) -> int:
        saveList=[0]*46
        saveList[1]=1
        saveList[2]=2
        for i in range(3,n+1):
            saveList[i]=saveList[i-1]+saveList[i-2]

        return saveList[n]

solve=Solution()
print(solve.climbStairs(4))