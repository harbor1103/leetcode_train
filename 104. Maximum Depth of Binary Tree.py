# 104. Maximum Depth of Binary Tree
# https://leetcode.cn/problems/maximum-depth-of-binary-tree/?envType=featured-list&envId=2cktkvj


# class Solution:
#     def maxDepth(self, root):
#         if root is None:
#             return 0
#         else:
#             left_height = self.maxDepth(root.left)
#             right_height = self.maxDepth(root.right)
#             return max(left_height, right_height) + 1