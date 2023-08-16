# 448. 找到所有数组中消失的数字
# https://leetcode.cn/problems/find-all-numbers-disappeared-in-an-array/solutions/602212/yi-zhang-dong-tu-bang-zhu-li-jie-yuan-di-uign/?envType=featured-list&envId=2cktkvj


class Solution(object):
    def findDisappearedNumbers(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        for i, num in enumerate(nums):
            if nums[abs(num) - 1] > 0:
                nums[abs(num) - 1] *= -1
        res = []
        for i in range(len(nums)):
            if nums[i] > 0:
                res.append(i + 1)
        return res

