# 141. 环形链表
# https://leetcode.cn/problems/linked-list-cycle/description/?envType=featured-list&envId=2cktkvj

# class Solution:
#     def hasCycle(self, head: Optional[ListNode]) -> bool:
#         if head is None:
#             return False
#         if head.next is None:
#             return False
#         slow = head
#         Fast = head
#         flag = False
#         while slow:
#             slow = slow.next
#             if Fast.next is None:
#                 return False
#             else:
#                 Fast = Fast.next
#                 if Fast.next is None:
#                     return False
#                 else:
#                     Fast = Fast.next
#
#             if slow == Fast:
#                 return True
#         return flag