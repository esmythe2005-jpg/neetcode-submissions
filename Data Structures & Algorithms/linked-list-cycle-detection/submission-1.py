# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution:
    def hasCycle(self, head: Optional[ListNode]) -> bool:
        slow = head
        fast = head

        if head == None:
            return False
        while fast:
            if fast.next == None or fast.next.next == None:
                return False
            fast = fast.next.next
            slow = slow.next
            if slow is fast:
                return True