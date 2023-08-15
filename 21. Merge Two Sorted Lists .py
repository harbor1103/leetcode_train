# 21. Merge Two Sorted Lists
# https://leetcode.cn/problems/merge-two-sorted-lists/?envType=featured-list&envId=2cktkvj

# Definition for singly-linked list.
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next
class Solution:
    def mergeTwoLists(self, list1: ListNode, list2:ListNode) -> ListNode:
        if list1 == None:
            return list2
        if list2 == None:
            return list1
        head= ListNode()
        curP=head
        p1 = list1
        p2=list2
        while(p1):
            if p2 is None:
                while(p1):
                    curP.next = p1
                    p1 = p1.next
                    curP = curP.next
                break
            if p1.val<= p2.val:
                curP.next = p1
                p1 = p1.next
                curP= curP.next
            else:
                curP.next = p2
                p2 = p2.next
                curP= curP.next
        if (p2):
            while p2:
                curP.next = p2
                p2 = p2.next
                curP= curP.next

        return head.next




