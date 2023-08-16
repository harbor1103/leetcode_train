# 283. 移动零
# https://leetcode.cn/problems/move-zeroes/?envType=featured-list&envId=2cktkvj


class Solution:
    def moveZeroes(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        count=0
        Len=len(nums)
        for i in range(Len):
            if nums[i]==0:
                nums.append(0)
                count+=1
            else:
                 nums[i-count]=nums[i]

        for i in range(Len-count,Len):
            nums[i]=0
        #下面这个for循环纯多余
        for i in range(count):
            nums.pop()
        print(nums)