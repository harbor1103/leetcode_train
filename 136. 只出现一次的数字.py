# 136. 只出现一次的数字
# https://leetcode.cn/problems/single-number/?envType=featured-list&envId=2cktkvj

# class Solution:
#     def singleNumber(self, nums) -> int:
#         if len(nums)==1:
#             return nums[0]
#         nums.sort()
#         i=0
#         k=0
#         while i <= len(nums):
#             j = k + 1
#             if j > len(nums)-1:
#                 return nums[k]
#             if nums[k] != nums[j]:
#                 return nums[k]
#             else:
#                 k+=2



sol=Solution()
nums=[-336,513,-560,-481,-174,101,-997,40,-527,-784,-283,-336,513,-560,-481,-174,101,-997,40,-527,-784,-283,354]
print(sol.singleNumber(nums))