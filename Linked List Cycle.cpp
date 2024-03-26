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
//         Start a slow and fast pointer
        ListNode* slowPtr = head;
        ListNode* fastPtr = head;
        
        while(slowPtr!=NULL && fastPtr!=NULL && fastPtr->next!=NULL) {
//             Advance both the pointers
            slowPtr = slowPtr->next;
            fastPtr = fastPtr->next->next;
            
//             If they meet, means we found a loop
            if(slowPtr == fastPtr) {
                return true;
            }
        }
        return false;
    }
};
