/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode reverseList(ListNode head) {
        if(head == null || head.next == null){ //base condition for the recursion
            return head;
        }
        
        ListNode newList = reverseList(head.next); //recursive function call
        
        head.next.next = head;//reverses the order of nodes
        head.next = null;
        
        return newList;
    }
}
