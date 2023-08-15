# 94. Binary Tree Inorder Traversal
# https://leetcode.cn/problems/binary-tree-inorder-traversal/?envType=featured-list&envId=2cktkvj



# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
# L=[]
#
# def Inorder(root):
#         if root is None:
#             return
#         Inorder (root.left)
#         L.append(root.val)
#         Inorder (root.right)
#
#
#
# class Solution:
#     def inorderTraversal(self, root: Optional[TreeNode]) -> List[int]:
#         L.clear()
#         Inorder(root)
#         return L
