# 206. 反转链表
# https://www.bilibili.com/video/BV1ot411y7mU/?p=3&vd_source=b0ad7a11a35f6bb99c79b79b455563fa

class Solution:
    def reverseList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        if head is None:
            return None
        L = []
        while head:
            L.append(head.val)
            head=head.next
        L=L[::-1]
        newHead=ListNode(L[0])
        cur=newHead
        for i in range(1,len(L)):
            tmpNode=ListNode(L[i])
            cur.next=tmpNode
            cur=cur.next
        return newHead
