# 234. 回文链表
# https://leetcode.cn/problems/palindrome-linked-list/?envType=featured-list&envId=2cktkvj

# class Solution:
#     def isPalindrome(self, head: ListNode) -> bool:
#         vals = []
#         current_node = head
#         while current_node is not None:
#             vals.append(current_node.val)
#             current_node = current_node.next
#         return vals == vals[::-1]
