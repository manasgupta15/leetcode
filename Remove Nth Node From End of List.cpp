/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *dummy = new ListNode(-1);
        dummy->next = head;
        
        ListNode *firstPtr = dummy;
        ListNode *secondPtr = dummy;
        
        for(int i = 0; i<n;i++) {
            secondPtr = secondPtr->next;
        }
        
        while(secondPtr->next!=NULL) {
            firstPtr = firstPtr->next;
            secondPtr = secondPtr->next;
        }
        
        firstPtr->next = firstPtr->next->next;
        
        return dummy->next;
    }
};
