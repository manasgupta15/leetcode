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
    ListNode *detectCycle(ListNode *head) {
        ListNode* slowPtr = head;
        ListNode* fastPtr = head;
        
        while(slowPtr != NULL && fastPtr != NULL && fastPtr->next != NULL) {
            slowPtr = slowPtr->next;
            fastPtr = fastPtr->next->next;
            
            if(slowPtr == fastPtr){
               ListNode* startPtr = head;
                while (startPtr != slowPtr) {
                    startPtr = startPtr->next;
                    slowPtr = slowPtr->next;
                }
                return startPtr;
            }
        }
        return NULL;
    }
};
