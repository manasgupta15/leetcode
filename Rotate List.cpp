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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL || k == 0) return head;
        ListNode* temp = head;
        int n = 0;

        while(temp->next) {
            temp = temp->next;
            n++;
        }

        temp->next = head;
        k = k%(n+1);
        int jump = n-k;
        temp = head;

        while(jump) {
            temp = temp->next;
            jump--;
        }
        ListNode* returnNode = temp->next;
        temp->next = nullptr;
        return returnNode;
    }
};
