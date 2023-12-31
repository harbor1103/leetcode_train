# https://leetcode.cn/problems/symmetric-tree/submissions/?envType=featured-list&envId=2cktkvj
# 101. Symmetric Tree

#没做出来
class Solution(object):
	def isSymmetric(self, root):

		if not root:
			return True
		def dfs(left,right):
			# 递归的终止条件是两个节点都为空
			# 或者两个节点中有一个为空
			# 或者两个节点的值不相等
			if not left and not right:
				return True
			if not left or not right:
				return False
			if left.val!=right.val:
				return False
			return dfs(left.left,right.right) and dfs(left.right,right.left)
		# 用递归函数，比较左节点，右节点
		return dfs(root.left,root.right)
