/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head == NULL || head->next == NULL)
            return 0;
        ListNode *ptr1, *ptr2;
        ptr1 = ptr2 = head;
        while(ptr2 != NULL && ptr2->next != NULL) {
            ptr1 = ptr1->next;
            ptr2 = ptr2->next->next;
            if(ptr1 == ptr2) {
                return 1;
            }
        }
        return 0;
    }
};