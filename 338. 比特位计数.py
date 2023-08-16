# 338. 比特位计数
# https://leetcode.cn/problems/counting-bits/description/?envType=featured-list&envId=2cktkvj
#
# class Solution:
#     def countBits(self, n: int) -> List[int]:
#         ret=[0]*(n+1)
#         for i in range(1,n+1):
#             if i % 2==1 :
#                 ret[i]=ret[i-1]+1
#             else:
#                 ret[i]=ret[i//2]
#         return ret