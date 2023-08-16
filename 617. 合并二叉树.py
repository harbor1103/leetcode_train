# 617. 合并二叉树
# https://leetcode.cn/problems/merge-two-binary-trees/?envType=featured-list&envId=2cktkvj


from collections import deque
class Solution:
    def mergeTrees(self, root1: Optional[TreeNode], root2: Optional[TreeNode]) -> Optional[TreeNode]:
        if root1 is None and root2 is None:
            return None
        if root2 is None and root1:
            return root1
        if root1 is None and root2:
            return root2
        d1=deque()
        d2=deque()
        d1.append(root1)
        d2.append(root2)
        while(len(d1) or len(d2)):
            tmp1=d1.popleft()
            tmp2=d2.popleft()
            tmp1.val+=tmp2.val
            if tmp1.left and tmp2.left:
               d1.append(tmp1.left)
               d2.append(tmp2.left)
            elif not tmp1.left:
                tmp1.left=tmp2.left
            if tmp1.right and tmp2.right:
                d1.append(tmp1.right)
                d2.append(tmp2.right)
            elif not tmp1.right:
                tmp1.right=tmp2.right

        return root1




