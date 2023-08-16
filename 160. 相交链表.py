# 160. 相交链表
# https://leetcode.cn/problems/intersection-of-two-linked-lists/?envType=featured-list&envId=2cktkvj
#没跑过
#下面有答案，双指针法

# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None
#

# class Solution:
#     def getIntersectionNode(self, headA: ListNode, headB: ListNode) :
#         if headA is None or headB is None :
#             return None
#         CurA=headA
#         CurB=headB
#         LA=[]
#         numa=[]
#         LB=[]
#         while CurA:
#             LA.append(id(CurA))
#             numa.append(CurA.val)
#             CurA=CurA.next
#         while CurB:
#             LB.append(id(CurB))
#             CurB=CurB.next
#         numa.reverse()
#         LA.reverse()
#         LB.reverse()
#         l=min(len(LA),len(LB))
#         for i in range(l):
#             if la[i]==lb[i]:
#                 continue
#             else:
#                 return numa[i-1]
#         return None
#
#
#
# def createLinkedList(lst):
#     if not lst:
#         return None
#
#     head = ListNode(lst[0])
#     curr = head
#
#     for i in range(1, len(lst)):
#         node = ListNode(lst[i])
#         curr.next = node
#         curr = curr.next
#
#     return head
#
# listA = createLinkedList([4,1,8,4,5])
# listB =  createLinkedList([5,6,1,8,4,5])
#
# s=Solution()
# s.getIntersectionNode(listA,listB)
#


# 这段代码是一个求两个链表的交点的算法。算法的思路是先分别遍历两个链表，
# 将链表的节点的内存地址和值存储在两个列表中。然后将两个列表进行反转，
# 并找到两个列表的最小长度。然后从头开始比较两个列表，找到第一个不相同的节点的前一个节点，即为交点。
# 如果遍历结束都没有找到不相同的节点，则说明两个链表没有交点。然而，这段代码存在一些问题：
# 1.
# 代码的可读性较差，变量命名不够清晰。
# 2.
# 没有考虑到两个链表长度不一致的情况。
# 3.
# 时间复杂度较高，需要遍历两个链表两次，并且需要额外的存储空间。
#
# 下面是对代码的一些改进：
# 1.
# 使用更加清晰的变量命名，提高代码的可读性。
# 2.
# 使用双指针法，遍历两个链表，当一个指针到达链表尾部时，将其指向另一个链表的头部。这样，两个指针最终会在交点处相遇，或者同时到达链表尾部。
# 3.
# 如果两个链表没有交点，两个指针会同时到达链表尾部，返回
# None。
# 4.
# 时间复杂度优化为
# O(N)，其中
# N
# 是两个链表的长度之和。
#
# 修改后的代码如下：
#
# ```python
#
#
# class Solution:
#     def getIntersectionNode(self, headA: ListNode, headB: ListNode) -> ListNode:
#         if headA is None or headB is None:
#             return None
#         A, B = headA, headB
#         while A != B:
#             A = A.next if A else headB
#             B = B.next if B else headA
#         return A

# ```
#
# 希望这次的解答对你有帮助！如果你还有其他问题，可以继续提问哦。
#


