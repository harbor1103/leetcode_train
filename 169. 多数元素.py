# 169. 多数元素
# https://leetcode.cn/problems/majority-element/?envType=featured-list&envId=2cktkvj
#这题思想很不错

class Solution:
    def majorityElement(self, nums) :
        if len(nums)==1:
            return nums[0]
        maj=nums[0]
        count=0
        for i in range(len(nums)):
            if nums[i]==maj:
                count+=1
            else:
                count-=1
            if count==0:
                maj=nums[i+1]
        return maj
